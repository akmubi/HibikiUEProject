#include "HbkGlitchData.h"

FHbkGlitchData::FHbkGlitchData() {
    this->CurrentPhaseTime = 0.00f;
    this->Time = 0.00f;
    this->bUseJumpTo = false;
    this->BlockScaleU = 0.00f;
    this->BlockScaleV = 0.00f;
    this->BlockThresh = 0.00f;
    this->BlockThresh2 = 0.00f;
    this->LineThresh = 0.00f;
    this->LineThresh2 = 0.00f;
    this->UFactor = 0.00f;
    this->UMulOffset = 0.00f;
    this->TimeStepU = 0.00f;
    this->TimeStepV = 0.00f;
    this->PixelateScale = 0.00f;
    this->BigWaveAmplitude = 0.00f;
    this->BigWaveSpeed = 0.00f;
    this->BigWaveOffset = 0.00f;
    this->BigWaveScale = 0.00f;
    this->SmallWaveAmplitude = 0.00f;
    this->SmallWaveSpeed = 0.00f;
    this->SmallWaveScale = 0.00f;
    this->NoiseScale = 0.00f;
    this->RandomMin = 0.00f;
    this->RandomMax = 0.00f;
    this->GlitchIntensity = 0.00f;
}

