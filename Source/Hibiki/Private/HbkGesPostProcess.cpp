#include "HbkGesPostProcess.h"

FHbkGesPostProcess::FHbkGesPostProcess() {
    this->bOverrideShadowColorLUT = false;
    this->ShadowColorLUT = NULL;
    this->ShadowColorLUT2 = NULL;
    this->ShadowColorLUT3 = NULL;
    this->ShadowColorLUT4 = NULL;
    this->bOverrideAmbientCubemapTex = false;
    this->AmbientCubemapTex = NULL;
    this->bOverrideAmbientCubemapIntensity = false;
    this->AmbientCubemapIntensity = 0.00f;
    this->bOverrideAmbientShadowColorChara = false;
    this->bOverrideAmbientLitColorChara = false;
    this->bOverrideAmbientShadowColorAddChara = false;
    this->bOverrideAmbientLitColorAddChara = false;
    this->bOverrideOnlyWhenActivated = false;
    this->AmbientShadowColorChara = FColor(0);
    this->AmbientLitColorChara = FColor(0);
    this->AmbientShadowColorAddChara = FColor(0);
    this->AmbientLitColorAddChara = FColor(0);
}

