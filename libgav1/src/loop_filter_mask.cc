#include "src/loop_filter_mask.h"

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <memory>
#include <new>

#include "src/utils/array_2d.h"

namespace libgav1 {

bool LoopFilterMask::Reset(int width, int height) {
  num_64x64_blocks_per_row_ = DivideBy64(width + 63);
  num_64x64_blocks_per_column_ = DivideBy64(height + 63);
  const int num_64x64_blocks =
      num_64x64_blocks_per_row_ * num_64x64_blocks_per_column_;
  if (num_64x64_blocks_ == -1 || num_64x64_blocks_ < num_64x64_blocks) {
    // Note that this need not be zero initialized here since we zero
    // initialize the required number of entries in the loop that follows.
    loop_filter_masks_.reset(new (std::nothrow)
                                 Data[num_64x64_blocks]);  // NOLINT.
    if (loop_filter_masks_ == nullptr) {
      return false;
    }
  }
  for (int i = 0; i < num_64x64_blocks; ++i) {
    memset(&loop_filter_masks_[i], 0, sizeof(loop_filter_masks_[i]));
  }
  num_64x64_blocks_ = num_64x64_blocks;
  return true;
}

bool LoopFilterMask::Build(
    const ObuSequenceHeader& sequence_header,
    const ObuFrameHeader& frame_header, int tile_group_start,
    int tile_group_end, BlockParametersHolder* const block_parameters_holder,
    const Array2D<TransformSize>& inter_transform_sizes) {
  for (int tile_number = tile_group_start; tile_number <= tile_group_end;
       ++tile_number) {
    const int row = tile_number / frame_header.tile_info.tile_columns;
    const int column = tile_number % frame_header.tile_info.tile_columns;
    const int row4x4_start = frame_header.tile_info.tile_row_start[row];
    const int row4x4_end = frame_header.tile_info.tile_row_start[row + 1];
    const int column4x4_start =
        frame_header.tile_info.tile_column_start[column];
    const int column4x4_end =
        frame_header.tile_info.tile_column_start[column + 1];

    const int num_planes = sequence_header.color_config.is_monochrome
                               ? kMaxPlanesMonochrome
                               : kMaxPlanes;
    for (int plane = kPlaneY; plane < num_planes; ++plane) {
      // For U and V planes, do not build bit masks if level == 0.
      if (plane > kPlaneY && frame_header.loop_filter.level[plane + 1] == 0) {
        continue;
      }
      const int8_t subsampling_x =
          (plane == kPlaneY) ? 0 : sequence_header.color_config.subsampling_x;
      const int8_t subsampling_y =
          (plane == kPlaneY) ? 0 : sequence_header.color_config.subsampling_y;
      const int plane_width =
          RightShiftWithRounding(frame_header.width, subsampling_x);
      const int plane_height =
          RightShiftWithRounding(frame_header.height, subsampling_y);
      const int vertical_step = 1 << subsampling_y;
      const int horizontal_step = 1 << subsampling_x;

      // Build bit masks for vertical edges.
      for (int row4x4 = GetDeblockPosition(row4x4_start, subsampling_y);
           row4x4 < row4x4_end &&
           MultiplyBy4(row4x4 >> subsampling_y) < plane_height;
           row4x4 += vertical_step) {
        if (column4x4_start == 0) break;  // Do not filter frame boundary.
        const int column4x4 =
            GetDeblockPosition(column4x4_start, subsampling_x);
        const BlockParameters& bp =
            *block_parameters_holder->Find(row4x4, column4x4);
        const uint8_t vertical_level =
            bp.deblock_filter_level[plane][kLoopFilterTypeVertical];
        const BlockParameters& bp_left =
            *block_parameters_holder->Find(row4x4, column4x4 - horizontal_step);
        const uint8_t left_level =
            bp_left.deblock_filter_level[plane][kLoopFilterTypeVertical];
        const int unit_id = DivideBy16(row4x4) * num_64x64_blocks_per_row_ +
                            DivideBy16(column4x4);
        const int row = row4x4 % kNum4x4InLoopFilterMaskUnit;
        const int column = column4x4 % kNum4x4InLoopFilterMaskUnit;
        const int shift = LoopFilterMask::GetShift(row, column);
        const int index = LoopFilterMask::GetIndex(row);
        const auto mask = static_cast<uint64_t>(1) << shift;
        // Tile boundary must be coding block boundary. So we don't have to
        // check (!left_skip || !skip || is_vertical_border).
        if (vertical_level != 0 || left_level != 0) {
          const TransformSize tx_size = GetTransformSize(
              frame_header.segmentation.lossless[bp.segment_id], bp.size,
              static_cast<Plane>(plane),
              inter_transform_sizes[row4x4][column4x4], subsampling_x,
              subsampling_y);
          const TransformSize left_tx_size = GetTransformSize(
              frame_header.segmentation.lossless[bp_left.segment_id],
              bp_left.size, static_cast<Plane>(plane),
              inter_transform_sizes[row4x4][column4x4 - horizontal_step],
              subsampling_x, subsampling_y);
          // 0: 4x4, 1: 8x8, 2: 16x16.
          const int transform_size_id =
              std::min({kTransformWidthLog2[tx_size] - 2,
                        kTransformWidthLog2[left_tx_size] - 2, 2});
          SetLeft(mask, unit_id, plane, transform_size_id, index);
          const uint8_t current_level =
              (vertical_level == 0) ? left_level : vertical_level;
          SetLevel(current_level, unit_id, plane, kLoopFilterTypeVertical,
                   LoopFilterMask::GetLevelOffset(row, column));
        }
      }

      // Build bit masks for horizontal edges.
      for (int column4x4 = GetDeblockPosition(column4x4_start, subsampling_x);
           column4x4 < column4x4_end &&
           MultiplyBy4(column4x4 >> subsampling_x) < plane_width;
           column4x4 += horizontal_step) {
        if (row4x4_start == 0) break;  // Do not filter frame boundary.
        const int row4x4 = GetDeblockPosition(row4x4_start, subsampling_y);
        const BlockParameters& bp =
            *block_parameters_holder->Find(row4x4, column4x4);
        const uint8_t horizontal_level =
            bp.deblock_filter_level[plane][kLoopFilterTypeHorizontal];
        const BlockParameters& bp_top =
            *block_parameters_holder->Find(row4x4 - vertical_step, column4x4);
        const uint8_t top_level =
            bp_top.deblock_filter_level[plane][kLoopFilterTypeHorizontal];
        const int unit_id = DivideBy16(row4x4) * num_64x64_blocks_per_row_ +
                            DivideBy16(column4x4);
        const int row = row4x4 % kNum4x4InLoopFilterMaskUnit;
        const int column = column4x4 % kNum4x4InLoopFilterMaskUnit;
        const int shift = LoopFilterMask::GetShift(row, column);
        const int index = LoopFilterMask::GetIndex(row);
        const auto mask = static_cast<uint64_t>(1) << shift;
        // Tile boundary must be coding block boundary. So we don't have to
        // check (!top_skip || !skip || is_horizontal_border).
        if (horizontal_level != 0 || top_level != 0) {
          const TransformSize tx_size = GetTransformSize(
              frame_header.segmentation.lossless[bp.segment_id], bp.size,
              static_cast<Plane>(plane),
              inter_transform_sizes[row4x4][column4x4], subsampling_x,
              subsampling_y);
          const TransformSize top_tx_size = GetTransformSize(
              frame_header.segmentation.lossless[bp_top.segment_id],
              bp_top.size, static_cast<Plane>(plane),
              inter_transform_sizes[row4x4 - vertical_step][column4x4],
              subsampling_x, subsampling_y);
          // 0: 4x4, 1: 8x8, 2: 16x16.
          const int transform_size_id =
              std::min({kTransformHeightLog2[tx_size] - 2,
                        kTransformHeightLog2[top_tx_size] - 2, 2});
          SetTop(mask, unit_id, plane, transform_size_id, index);
          const uint8_t current_level =
              (horizontal_level == 0) ? top_level : horizontal_level;
          SetLevel(current_level, unit_id, plane, kLoopFilterTypeHorizontal,
                   LoopFilterMask::GetLevelOffset(row, column));
        }
      }
    }
  }
  // Check bit masks.
  for (int i = 0; i < num_64x64_blocks_; ++i) {
    if (!IsValid(i)) return false;
  }

  return true;
}

// Loop filter masks at different transform sizes should be mutually exclusive.
bool LoopFilterMask::IsValid(int mask_id) const {
  for (int plane = 0; plane < kMaxPlanes; ++plane) {
    for (int i = 0; i < kNumTransformSizesLoopFilter; ++i) {
      for (int j = i + 1; j < kNumTransformSizesLoopFilter; ++j) {
        for (int k = 0; k < kNumLoopFilterMasks; ++k) {
          if ((loop_filter_masks_[mask_id].left[plane][i][k] &
               loop_filter_masks_[mask_id].left[plane][j][k]) != 0 ||
              (loop_filter_masks_[mask_id].top[plane][i][k] &
               loop_filter_masks_[mask_id].top[plane][j][k]) != 0) {
            return false;
          }
        }
      }
    }
  }
  return true;
}

}  // namespace libgav1
