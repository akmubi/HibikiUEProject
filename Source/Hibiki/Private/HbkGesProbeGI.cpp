#include "HbkGesProbeGI.h"

FHbkGesProbeGI::FHbkGesProbeGI() {
    this->bOverrideGIHalftoneIntensity = false;
    this->GIHalftoneIntensity = 0.00f;
    this->bOverrideGIHalftoneWorldSpaceUV = false;
    this->GIHalftoneWorldSpaceUV = false;
    this->bOverrideGIHalftoneFrequency = false;
    this->GIHalftoneFrequency = 0.00f;
    this->bOverrideGIHalftoneRadiusMin = false;
    this->GIHalftoneRadiusMin = 0.00f;
    this->bOverrideGIHalftoneRadiusMax = false;
    this->GIHalftoneRadiusMax = 0.00f;
    this->bOverrideGIHalftoneRadiusMinThreshold = false;
    this->GIHalftoneRadiusMinThreshold = 0.00f;
    this->bOverrideGIHalftoneRadiusMaxThreshold = false;
    this->GIHalftoneRadiusMaxThreshold = 0.00f;
    this->bOverrideGIHalftoneLumPow = false;
    this->GIHalftoneLumPow = 0.00f;
    this->bOverrideGIHalftoneRadiusPow = false;
    this->GIHalftoneRadiusPow = 0.00f;
    this->bOverrideGIHalftoneBlendRatio = false;
    this->GIHalftoneBlendRatio = 0.00f;
    this->bOverrideGICharaIntensityMult = false;
    this->GICharaIntensityMult = 0.00f;
    this->bOverrideGICutoutStepNum = false;
    this->GICutoutStepNum = 0.00f;
    this->bOverrideGICutoutBlendRatio = false;
    this->GICutoutBlendRatio = 0.00f;
}

