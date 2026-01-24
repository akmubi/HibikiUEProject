#include "HbkHalftoneLitTableRow.h"

FHbkHalftoneLitTableRow::FHbkHalftoneLitTableRow() {
    this->HalftoneLitUseScreenSpaceUV = false;
    this->HalftoneLitCameraFarFadeDist = 0.00f;
    this->HalftoneLitCameraFarFadeStart = 0.00f;
    this->HalftoneLitCameraNearFadeDist = 0.00f;
    this->HalftoneLitCameraNearFadeStart = 0.00f;
    this->HalftoneLitFadeRate = 0.00f;
    this->HalftoneLitFreq = 0.00f;
    this->HalftoneLitLumRadiusMaxDiffuseColorMax = 0.00f;
    this->HalftoneLitLumRadiusMaxDiffuseColorThinness = 0.00f;
    this->HalftoneLitRotDeg = 0.00f;
    this->HalftoneLitShadowColorOffset = 0.00f;
    this->HalftoneLitShadowColorThreshold = 0.00f;
    this->HalftoneLitLumRadiusMin = 0.00f;
    this->HalftoneLitLumRadiusMax = 0.00f;
    this->HalftoneLitBoxFadeRate = 0.00f;
    this->HalftoneLitColor1 = FLinearColor(FColor(0));
    this->HalftoneLitColor2 = FLinearColor(FColor(0));
}

