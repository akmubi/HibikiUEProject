#include "HbkGesShadowData.h"

FHbkGesShadowData::FHbkGesShadowData() {
    this->bOverrideShadowColor = false;
    this->bOverrideShadowLUTTint = false;
    this->bOverrideShadowColorInsideShadow = false;
    this->bOverrideShadowColorInsideShadowAdd = false;
    this->bOverrideShadowColorCharacterAmbient = false;
    this->bOverridePlayerShadowColorAdd = false;
    this->bOverrideStaticShadowMapColorInsideDeferredLight = false;
    this->ShadowColor = FLinearColor(FColor(0));
    this->ShadowLUTTint = FLinearColor(FColor(0));
    this->ShadowColorInsideShadow = FLinearColor(FColor(0));
    this->ShadowColorInsideShadowAdd = FLinearColor(FColor(0));
    this->ShadowColorCharacterAmbient = FLinearColor(FColor(0));
    this->PlayerShadowColorAdd = FLinearColor(FColor(0));
    this->StaticShadowMapColorInsideDeferredLight = FLinearColor(FColor(0));
}


