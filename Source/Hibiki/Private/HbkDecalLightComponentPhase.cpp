#include "HbkDecalLightComponentPhase.h"

FHbkDecalLightComponentPhase::FHbkDecalLightComponentPhase() {
    this->bOverrideLightColor = false;
    this->bOverrideLightIntensity = false;
    this->LightIntensity = 0.00f;
    this->bOverrideBaseColor = false;
    this->bOverrideDecalLightBlendRatio = false;
    this->DecalLightBlendRatio = 0.00f;
    this->bOverrideAttenuationRadius = false;
    this->AttenuationRadius = 0.00f;
    this->bOverrideInnerConeAngle = false;
    this->InnerConeAngle = 0.00f;
    this->bOverrideOuterConeAngle = false;
    this->OuterConeAngle = 0.00f;
    this->bOverrideCutoutIntensity1 = false;
    this->CutoutIntensity1 = 0.00f;
    this->bOverrideCutoutIntensity2 = false;
    this->CutoutIntensity2 = 0.00f;
    this->bOverrideCutoutIntensity3 = false;
    this->CutoutIntensity3 = 0.00f;
    this->bOverrideCutoutIntensity4 = false;
    this->CutoutIntensity4 = 0.00f;
    this->bOverrideCutoutIntensity5 = false;
    this->CutoutIntensity5 = 0.00f;
    this->bOverrideCutoutFinalBlendRatio1 = false;
    this->CutoutFinalBlendRatio1 = 0.00f;
    this->bOverrideCutoutFinalBlendRatio2 = false;
    this->CutoutFinalBlendRatio2 = 0.00f;
    this->bOverrideCutoutFinalBlendRatio3 = false;
    this->CutoutFinalBlendRatio3 = 0.00f;
    this->bOverrideCutoutFinalBlendRatio4 = false;
    this->CutoutFinalBlendRatio4 = 0.00f;
    this->bOverrideCutoutFinalBlendRatio5 = false;
    this->CutoutFinalBlendRatio5 = 0.00f;
    this->LightColor = FColor(0);
    this->BaseColor = FColor(0);
}

