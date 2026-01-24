#include "HbkLightComponentPhase.h"

FHbkLightComponentPhase::FHbkLightComponentPhase() {
    this->bOverrideLightColor = false;
    this->bOverrideIntensity = false;
    this->Intensity = 0.00f;
    this->LightColor = FColor(0);
}

