#include "HbkDecalLightComponent.h"

UHbkDecalLightComponent::UHbkDecalLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightIntensity = 1.00f;
    this->DecalLightBlendRatio = 1.00f;
    this->AttenuationRadius = 1000.00f;
    this->ShadowThreshold = 0.10f;
    this->bUseProjectiveTexture = false;
    this->bUseTriplanarMapping = false;
    this->bUseAlphaTexture = false;
    this->ProjectedTexture = NULL;
    this->LumThreshold = 0.00f;
    this->ProjTexCutoutNum = 1;
    this->CutoutIntensity1 = 1.00f;
    this->CutoutIntensity2 = 0.90f;
    this->CutoutIntensity3 = 0.80f;
    this->CutoutIntensity4 = 0.60f;
    this->CutoutIntensity5 = 0.50f;
    this->CutoutFinalBlendRatio1 = 1.00f;
    this->CutoutFinalBlendRatio2 = 1.00f;
    this->CutoutFinalBlendRatio3 = 1.00f;
    this->CutoutFinalBlendRatio4 = 1.00f;
    this->CutoutFinalBlendRatio5 = 1.00f;
    this->CutoutScale1 = 1.00f;
    this->CutoutScale2 = 0.88f;
    this->CutoutScale3 = 0.77f;
    this->CutoutScale4 = 0.65f;
    this->CutoutScale5 = 0.54f;
    this->AddressU = TA_Wrap;
    this->AddressV = TA_Wrap;
    this->DistanceFadeStart = -1.00f;
    this->DistanceFadeFadeDistance = 3000.00f;
    this->DrawPriority = 0;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
    this->bIsAssignedToDecalVolume = false;
}

void UHbkDecalLightComponent::SetLightIntensity(const float InLightIntensity) {
}

void UHbkDecalLightComponent::SetDecalLightBlendRatio(const float InDecalLightBlendRatio) {
}

void UHbkDecalLightComponent::SetBaseColor(const FColor& InBaseColor) {
}


