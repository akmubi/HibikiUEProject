#include "HbkGesAnalyticFog.h"

FHbkGesAnalyticFog::FHbkGesAnalyticFog() {
    this->bOverrideAFogGlobalIntensity = false;
    this->AFogGlobalIntensity = 0.00f;
    this->bOverrideAFogHalftoneIntensity = false;
    this->AFogHalftoneIntensity = 0.00f;
    this->bOverrideAFogHalftoneRadiusMin = false;
    this->AFogHalftoneRadiusMin = 0.00f;
    this->bOverrideAFogHalftoneRadiusMax = false;
    this->AFogHalftoneRadiusMax = 0.00f;
    this->bOverrideAFogHalftoneFrequency = false;
    this->AFogHalftoneFrequency = 0.00f;
    this->bOverrideAFogHalftoneFrequencyMid = false;
    this->AFogHalftoneFrequencyMid = 0.00f;
    this->bOverrideAFogHalftoneFrequencyMidDist = false;
    this->AFogHalftoneFrequencyMidDist = 0.00f;
    this->bOverrideAFogHalftoneDistFadeStart = false;
    this->AFogHalftoneDistFadeStart = 0.00f;
    this->bOverrideAFogHalftoneDistFadeDist = false;
    this->AFogHalftoneDistFadeDist = 0.00f;
    this->bOverrideAFogHalftoneRadiusPow = false;
    this->AFogHalftoneRadiusPow = 0.00f;
    this->bOverrideAFogHalftoneLumPow = false;
    this->AFogHalftoneLumPow = 0.00f;
    this->bOverrideAFogHalftoneRadiusMinThreshold = false;
    this->AFogHalftoneRadiusMinThreshold = 0.00f;
    this->bOverrideAFogHalftoneRadiusMaxThreshold = false;
    this->AFogHalftoneRadiusMaxThreshold = 0.00f;
}

