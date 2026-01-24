#include "HbkGesExponentialHeightFog.h"

FHbkGesExponentialHeightFog::FHbkGesExponentialHeightFog() {
    this->bOverrideFogCutoffDistance = false;
    this->FogCutoffDistance = 0.00f;
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
    this->FogInscatteringColor = FLinearColor(FColor(0));
}
