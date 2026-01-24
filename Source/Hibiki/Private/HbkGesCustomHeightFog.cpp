#include "HbkGesCustomHeightFog.h"

FHbkGesCustomHeightFog::FHbkGesCustomHeightFog() {
    this->bOverrideFogHeight = false;
    this->FogHeight = 0.00f;
    this->bOverrideFogCutoffDistance = false;
    this->FogCutoffDistance = 0.00f;
    this->bOverrideFogFadeOutDistance = false;
    this->FogFadeOutDistance = 0.00f;
    this->bOverrideFogDensity = false;
    this->FogDensity = 0.00f;
    this->bOverrideFogHeightFalloff = false;
    this->FogHeightFalloff = 0.00f;
    this->bOverrideFogInscatteringColor = false;
    this->bOverrideFogMaxOpacity = false;
    this->FogMaxOpacity = 0.00f;
    this->bOverrideStartDistance = false;
    this->StartDistance = 0.00f;
    this->bOverrideFogDensity2 = false;
    this->FogDensity2 = 0.00f;
    this->bOverrideFogHeightFalloff2 = false;
    this->FogHeightFalloff2 = 0.00f;
    this->bOverrideFogHeightOffset = false;
    this->FogHeightOffset = 0.00f;
    this->bOverrideBlendMethod = false;
    this->BlendMethod = 0.00f;
    this->bOverrideBlendFogs = false;
    this->BlendFogs = 0.00f;
    this->bOverrideEdgeFadeWidth = false;
    this->FogInscatteringColor = FLinearColor(FColor(0));
    this->EdgeFadeWidth = FVector(0.0f);
}

