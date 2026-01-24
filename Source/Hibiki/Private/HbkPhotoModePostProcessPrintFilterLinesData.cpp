#include "HbkPhotoModePostProcessPrintFilterLinesData.h"

FHbkPhotoModePostProcessPrintFilterLinesData::FHbkPhotoModePostProcessPrintFilterLinesData() {
    this->LinesShadowUseScreenSpaceUV = false;
    this->LinesShadowCameraFarFadeDist = 0.00f;
    this->LinesShadowCameraFarFadeStart = 0.00f;
    this->LinesShadowCameraNearFadeDist = 0.00f;
    this->LinesShadowCameraNearFadeStart = 0.00f;
    this->LinesShadowFreq = 0.00f;
    this->LinesShadowFreqMin = 0.00f;
    this->LinesShadowFreqMax = 0.00f;
    this->LinesShadowRotDeg = 0.00f;
    this->LinesShadowLumBoost = 0.00f;
    this->LinesShadowLumRadiusMin = 0.00f;
    this->LinesShadowLumRadiusMid1 = 0.00f;
    this->LinesShadowLumRadiusMid2 = 0.00f;
    this->LinesShadowLumRadiusMax = 0.00f;
    this->LinesShadowBlendRatio = 0.00f;
    this->bLinesShadowSkipForeground = false;
    this->LinesShadowColor1 = FLinearColor(FColor(0));
    this->LinesShadowColor2 = FLinearColor(FColor(0));
}

