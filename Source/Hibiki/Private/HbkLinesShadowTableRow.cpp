#include "HbkLinesShadowTableRow.h"

FHbkLinesShadowTableRow::FHbkLinesShadowTableRow() {
    this->LinesShadowUseScreenSpaceUV = false;
    this->LinesShadowCameraFarFadeDist = 0.00f;
    this->LinesShadowCameraFarFadeStart = 0.00f;
    this->LinesShadowCameraNearFadeDist = 0.00f;
    this->LinesShadowCameraNearFadeStart = 0.00f;
    this->LinesShadowFadeRate = 0.00f;
    this->LinesShadowFreq = 0.00f;
    this->LinesShadowLumEdgeThinness = 0.00f;
    this->LinesShadowLumRadiusMinDiffuseColorMin = 0.00f;
    this->LinesShadowLumRadiusMinDiffuseColorThinness = 0.00f;
    this->LinesShadowRotDeg = 0.00f;
    this->LinesShadowLumRadiusMin = 0.00f;
    this->LinesShadowLumRadiusMax = 0.00f;
    this->LinesShadowBoxFadeRate = 0.00f;
    this->LinesShadowColor1 = FLinearColor(FColor(0));
    this->LinesShadowColor2 = FLinearColor(FColor(0));
}

