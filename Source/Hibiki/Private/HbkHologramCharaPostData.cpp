#include "HbkHologramCharaPostData.h"

FHbkHologramCharaPostData::FHbkHologramCharaPostData() {
    this->bHologramOcclusionCheck = false;
    this->bOutlineOcclusionCheck = false;
    this->bUseDitherAlphaFade = false;
    this->bHiddenInGameAfterDisappearDitherAlphaFade = false;
    this->LinesBlendRatio = 0.00f;
    this->BlendInTime = 0.00f;
    this->BlendInOutlineIntensity = 0.00f;
    this->bHologramInfiniteLife = false;
    this->HologramTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->EmissiveScale1 = 0.00f;
    this->EmissiveScale2 = 0.00f;
    this->LinesFreq = 0.00f;
    this->LinesFreqFarStart = 0.00f;
    this->LinesFreqFar = 0.00f;
    this->LinesRadius = 0.00f;
    this->LinesScrollSpeed = 0.00f;
    this->LinesClipStart = 0.00f;
    this->LinesClipDist = 0.00f;
    this->NoiseStrength = 0.00f;
    this->OutlineIntensity = 0.00f;
    this->bHologramKaleDash = false;
    this->KaleDashMultColorIntensity = 0.00f;
    this->KaleDashAddColorIntensity = 0.00f;
    this->bSeparateTranslucencyAddBlendFixPatch = false;
    this->Color1 = FLinearColor(FColor(0));
    this->Color2 = FLinearColor(FColor(0));
    this->OutlineColor = FLinearColor(FColor(0));
    this->KaleDashMultColor = FLinearColor(FColor(0));
    this->KaleDashAddColor = FLinearColor(FColor(0));
}

