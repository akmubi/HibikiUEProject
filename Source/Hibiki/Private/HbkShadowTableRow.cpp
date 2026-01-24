#include "HbkShadowTableRow.h"

FHbkShadowTableRow::FHbkShadowTableRow() {
    this->LightColorSaturation = 0.00f;
    this->ShadowThreshold = 0.00f;
    this->bUseKeyLightShadowColor = false;
    this->StaticShadowMapFadeLineFrequency = 0.00f;
    this->StaticShadowMapFadeLineRadius0 = 0.00f;
    this->StaticShadowMapFadeLineRadius1 = 0.00f;
    this->StaticShadowMapFadeLineRadius2 = 0.00f;
    this->StaticShadowMapFadeLineRadius3 = 0.00f;
    this->StaticShadowMapFadeLineRadius4 = 0.00f;
    this->StaticShadowMapFadeLineAlpha0 = 0.00f;
    this->StaticShadowMapFadeLineAlpha1 = 0.00f;
    this->StaticShadowMapFadeLineAlpha2 = 0.00f;
    this->StaticShadowMapFadeLineAlpha3 = 0.00f;
    this->StaticShadowMapFadeLineAlpha4 = 0.00f;
    this->ShadowColor = FLinearColor(FColor(0));
    this->KeyLightShadowColor = FLinearColor(FColor(0));
    this->ShadowLUTTint = FLinearColor(FColor(0));
    this->ShadowColorInsideShadow = FLinearColor(FColor(0));
    this->ShadowColorInsideShadowAdd = FLinearColor(FColor(0));
    this->ShadowColorCharacterAmbient = FLinearColor(FColor(0));
    this->PlayerShadowColorAdd = FLinearColor(FColor(0));
    this->StaticShadowMapColorInsideDeferredLight = FLinearColor(FColor(0));
    this->StaticShadowMapColor = FLinearColor(FColor(0));
    this->StaticShadowMapForwardLightLitColorMult = FLinearColor(FColor(0));
    this->StaticShadowMapForwardLightLitColorAdd = FLinearColor(FColor(0));
    this->AOVolumeColor = FLinearColor(FColor(0));
}

