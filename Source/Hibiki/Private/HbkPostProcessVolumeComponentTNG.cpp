#include "HbkPostProcessVolumeComponentTNG.h"

UHbkPostProcessVolumeComponentTNG::UHbkPostProcessVolumeComponentTNG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->UseShadowVolume = false;
    this->ShadowColorVolumeDebug = false;
    this->ShadowVolume = NULL;
    this->ShadowVolume2 = NULL;
    this->ShadowVolume3 = NULL;
    this->ShadowVolume4 = NULL;
    this->UseAOVolume = true;
    this->UseStaticShadowMap = true;
    this->UseSSAO = true;
    this->UseAmbientCubemap = false;
    this->AmbientCubemap = NULL;
    this->UseHalftoneLit = false;
    this->UseLinesShadow = false;
    this->IsGlobalVolume = false;
    this->DrawPriority = 0;
    this->OverrideAmbientShadowColorChara = false;
    this->OverrideAmbientLitColorChara = false;
    this->OverrideAmbientShadowColorAddChara = false;
    this->OverrideAmbientLitColorAddChara = false;
}


