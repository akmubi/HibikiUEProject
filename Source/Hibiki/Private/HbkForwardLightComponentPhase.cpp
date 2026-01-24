#include "HbkForwardLightComponentPhase.h"

FHbkForwardLightComponentPhase::FHbkForwardLightComponentPhase() {
    this->bOverrideLightColor = false;
    this->bOverrideLightIntensity = false;
    this->LightIntensity = 0.00f;
    this->bOverrideLightBaseColorRatio = false;
    this->LightBaseColorRatio = 0.00f;
    this->bOverrideShadowColor = false;
    this->bOverrideOriginalBaseColorBrightness = false;
    this->OriginalBaseColorBrightness = 0.00f;
    this->bOverrideShadowColorBaseColorBlendRatio = false;
    this->ShadowColorBaseColorBlendRatio = 0.00f;
    this->bOverrideAttenuationRadius = false;
    this->AttenuationRadius = 0.00f;
    this->bOverrideInnerConeAngle = false;
    this->InnerConeAngle = 0.00f;
    this->bOverrideOuterConeAngle = false;
    this->OuterConeAngle = 0.00f;
    this->LightColor = FColor(0);
    this->ShadowColor = FColor(0);
}

