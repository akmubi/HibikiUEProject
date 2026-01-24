#include "HbkGesLighting.h"

FHbkGesLighting::FHbkGesLighting() {
    this->bOverrideDeferredLightsGlobalIntensity = false;
    this->DeferredLightsGlobalIntensity = 0.00f;
    this->bOverrideDisableDeferredLightingOnChara = false;
    this->bDisableDeferredLightingOnChara = false;
    this->bOverrideDisableForwardLightingOnChara = false;
    this->bDisableForwardLightingOnChara = false;
    this->bOverrideDecalLightsGlobalIntensity = false;
    this->DecalLightsGlobalIntensity = 0.00f;
}

