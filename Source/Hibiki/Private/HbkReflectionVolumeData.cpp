#include "HbkReflectionVolumeData.h"

FHbkReflectionVolumeData::FHbkReflectionVolumeData() {
    this->Intensity = 0.00f;
    this->RoughnessOffset = 0.00f;
    this->RoughnessToIntensity1 = 0.00f;
    this->RoughnessToIntensity2 = 0.00f;
    this->RoughnessToIntensity3 = 0.00f;
    this->RoughnessToIntensity4 = 0.00f;
    this->RoughnessToIntensity5 = 0.00f;
    this->RoughnessToGlossiness1 = 0.00f;
    this->RoughnessToGlossiness2 = 0.00f;
    this->RoughnessToGlossiness3 = 0.00f;
    this->RoughnessToGlossiness4 = 0.00f;
    this->RoughnessToGlossiness5 = 0.00f;
    this->bUseCutout = false;
    this->NumLevels = 0;
    this->CutoutGamma = 0.00f;
    this->CutoutBlendRatio = 0.00f;
    this->bUseHalftone = false;
    this->HalftoneFrequency = 0.00f;
    this->HalftoneRadiusMin = 0.00f;
    this->HalftoneRadiusMax = 0.00f;
    this->HalftoneRadiusMinThreshold = 0.00f;
    this->HalftoneRadiusMaxThreshold = 0.00f;
    this->HalftoneLumPow = 0.00f;
    this->HalftoneRadiusPow = 0.00f;
    this->HalftoneBlendRatio = 0.00f;
}

