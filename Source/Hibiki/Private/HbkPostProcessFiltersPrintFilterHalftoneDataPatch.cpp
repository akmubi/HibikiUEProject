#include "HbkPostProcessFiltersPrintFilterHalftoneDataPatch.h"

FHbkPostProcessFiltersPrintFilterHalftoneDataPatch::FHbkPostProcessFiltersPrintFilterHalftoneDataPatch() {
    this->HalftoneLitCameraFarFadeDist = 0.00f;
    this->HalftoneLitCameraFarFadeStart = 0.00f;
    this->HalftoneLitCameraNearFadeDist = 0.00f;
    this->HalftoneLitCameraNearFadeStart = 0.00f;
    this->HalftoneLitFreq720p = 0.00f;
    this->HalftoneLitFreq1080p = 0.00f;
    this->HalftoneLitFreq1440p = 0.00f;
    this->HalftoneLitFreq2160p = 0.00f;
    this->HalftoneLitLumBoost = 0.00f;
    this->HalftoneLitLumRadiusMin = 0.00f;
    this->HalftoneLitLumRadiusMid1 = 0.00f;
    this->HalftoneLitLumRadiusMid2 = 0.00f;
    this->HalftoneLitLumRadiusMax = 0.00f;
    this->HalftoneLitBlendRatio = 0.00f;
    this->HalftoneLitColor1 = FLinearColor(FColor(0));
    this->HalftoneLitColor2 = FLinearColor(FColor(0));
}

