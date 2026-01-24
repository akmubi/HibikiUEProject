#include "HbkBloomTableRow.h"

FHbkBloomTableRow::FHbkBloomTableRow() {
    this->bUseBloomHalftone = false;
    this->BloomHalftoneRadiusMin = 0.00f;
    this->BloomHalftoneRadiusMax = 0.00f;
    this->BloomHalftoneFrequency = 0.00f;
    this->BloomHalftoneRadiusPow = 0.00f;
    this->BloomHalftoneLumPow = 0.00f;
    this->BloomHalftoneIntensity = 0.00f;
    this->BloomHalftoneBlendRatio = 0.00f;
    this->BloomHalftoneRadiusMinThreshold = 0.00f;
    this->BloomHalftoneRadiusMaxThreshold = 0.00f;
    this->BloomCutoutStepNum = 0.00f;
    this->BloomCutoutBlendRatio = 0.00f;
}

