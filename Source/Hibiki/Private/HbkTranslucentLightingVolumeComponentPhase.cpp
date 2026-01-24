#include "HbkTranslucentLightingVolumeComponentPhase.h"

FHbkTranslucentLightingVolumeComponentPhase::FHbkTranslucentLightingVolumeComponentPhase() {
    this->bOverrideFresnelColor1 = false;
    this->bOverrideFresnelIntensity1 = false;
    this->FresnelIntensity1 = 0.00f;
    this->bOverrideFresnelColor2 = false;
    this->bOverrideFresnelIntensity2 = false;
    this->FresnelIntensity2 = 0.00f;
    this->bOverrideFresnelExponent = false;
    this->FresnelExponent = 0.00f;
    this->FresnelColor1 = FLinearColor(FColor(0));
    this->FresnelColor2 = FLinearColor(FColor(0));
}

