#ifndef LIBGAV1_SRC_DSP_X86_INTRAPRED_SSE4_H_
#define LIBGAV1_SRC_DSP_X86_INTRAPRED_SSE4_H_

#include "src/dsp/cpu.h"
#include "src/dsp/dsp.h"
#include "src/dsp/intrapred.h"

namespace libgav1 {
namespace dsp {

// Initializes Dsp::intra_predictors with sse4 implementations. This function
// is not thread-safe.
void IntraPredInit_SSE4_1();
void IntraPredCflInit_SSE4_1();

}  // namespace dsp
}  // namespace libgav1

// If sse4 is enabled and the baseline isn't set due to a higher level of
// optimization being enabled, signal the sse4 implementation should be used.
#if LIBGAV1_ENABLE_SSE4_1
#ifndef LIBGAV1_Dsp8bpp_FilterIntraPredictor
#define LIBGAV1_Dsp8bpp_FilterIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_DirectionalIntraPredictorZone1
#define LIBGAV1_Dsp8bpp_DirectionalIntraPredictorZone1 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_DirectionalIntraPredictorZone2
#define LIBGAV1_Dsp8bpp_DirectionalIntraPredictorZone2 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_DirectionalIntraPredictorZone3
#define LIBGAV1_Dsp8bpp_DirectionalIntraPredictorZone3 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorDcTop
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorDcTop \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize4x4_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize4x8_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize4x16_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize8x4_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize8x8_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize8x16_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize8x32_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize16x4_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize16x8_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize16x16_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize16x32_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize32x8_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize32x16_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_CflSubsampler444
#define LIBGAV1_Dsp8bpp_TransformSize32x32_CflSubsampler444 LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize4x4_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize4x8_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize4x16_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize8x4_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize8x8_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize8x16_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize8x32_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize16x4_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize16x8_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize16x16_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize16x32_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize32x8_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize32x16_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_CflIntraPredictor
#define LIBGAV1_Dsp8bpp_TransformSize32x32_CflIntraPredictor LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorDcLeft LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorDcLeft LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorDcLeft LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorDcLeft LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorDcLeft
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorDc
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorPaeth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorPaeth
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorPaeth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorSmooth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorSmooth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorSmooth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorSmooth LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorSmooth
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorSmooth \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorSmoothVertical
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorSmoothVertical \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize4x4_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize4x8_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize4x16_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x4_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x8_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x16_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize8x32_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x4_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x8_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x16_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x32_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize16x64_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x8_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x16_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x32_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize32x64_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize64x16_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize64x32_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorSmoothHorizontal
#define LIBGAV1_Dsp8bpp_TransformSize64x64_IntraPredictorSmoothHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

//------------------------------------------------------------------------------
// 10bpp

#ifndef LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorDcTop
#define LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorDcTop LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorDcLeft
#define LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorDcLeft \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorDc
#define LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorDc LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize4x4_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize4x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize4x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize4x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize4x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize8x4_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize8x4_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize8x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize8x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize8x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize8x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize8x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize8x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize16x4_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize16x4_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize16x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize16x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize16x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize16x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize16x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize16x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize16x64_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize16x64_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize32x8_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize32x8_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize32x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize32x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize32x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize32x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize32x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize32x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize32x64_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize32x64_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize64x16_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize64x16_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize64x32_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize64x32_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp10bpp_TransformSize64x64_IntraPredictorHorizontal
#define LIBGAV1_Dsp10bpp_TransformSize64x64_IntraPredictorHorizontal \
  LIBGAV1_DSP_SSE4_1
#endif

#endif  // LIBGAV1_ENABLE_SSE4_1

#endif  // LIBGAV1_SRC_DSP_X86_INTRAPRED_SSE4_H_
