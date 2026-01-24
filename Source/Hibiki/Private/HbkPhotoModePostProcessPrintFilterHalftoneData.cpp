#include "HbkPhotoModePostProcessPrintFilterHalftoneData.h"

FHbkPhotoModePostProcessPrintFilterHalftoneData::FHbkPhotoModePostProcessPrintFilterHalftoneData() {
    this->HalftoneLitUseScreenSpaceUV = false;
    this->HalftoneLitCameraFarFadeDist = 0.00f;
    this->HalftoneLitCameraFarFadeStart = 0.00f;
    this->HalftoneLitCameraNearFadeDist = 0.00f;
    this->HalftoneLitCameraNearFadeStart = 0.00f;
    this->HalftoneLitFreq = 0.00f;
    this->HalftoneLitFreqMin = 0.00f;
    this->HalftoneLitFreqMax = 0.00f;
    this->HalftoneLitRotDeg = 0.00f;
    this->HalftoneLitLumBoost = 0.00f;
    this->HalftoneLitLumRadiusMin = 0.00f;
    this->HalftoneLitLumRadiusMid1 = 0.00f;
    this->HalftoneLitLumRadiusMid2 = 0.00f;
    this->HalftoneLitLumRadiusMax = 0.00f;
    this->HalftoneLitBlendRatio = 0.00f;
    this->bHalftoneLitSkipForeground = false;
    this->HalftoneLitColor1 = FLinearColor(FColor(0));
    this->HalftoneLitColor2 = FLinearColor(FColor(0));
}

