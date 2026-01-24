#include "HbkAnalyticFogComponent.h"

UHbkAnalyticFogComponent::UHbkAnalyticFogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->CastShadow = false;
    this->OverrideMaterials.AddDefaulted(1);
    this->bReverseCulling = true;
    this->FogType = EHbkAnalyticFogType::HBK_ANALYTIC_FOG_NONE;
    this->ScatteringCoeff = 50.00f;
    this->LightCenterHeight = 0.00f;
    this->Aperture = 0.30f;
    this->RotX = 0.00f;
    this->RotZ = 0.00f;
    this->BaseColorIntensity = 1.00f;
    this->HalftoneIntensity = 1.00f;
    this->DepthFadeDistance = 0.00f;
    this->EdgeFadeExp = 0.00f;
    this->OpacityRate = 1.00f;
    this->DistanceFadeStart = 6000.00f;
    this->DistanceFadeFadeDistance = 3000.00f;
    this->bPreDofMaterialInstanceOverride = false;
    this->bIsCutsceneAnalyticFog = false;
    this->bUseOpt = true;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
    this->OriginalMaterialInstance = NULL;
}

void UHbkAnalyticFogComponent::OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkAnalyticFogComponent::OnGimmickComponentDeactivate(AActor* Activator) {
}

void UHbkAnalyticFogComponent::OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkAnalyticFogComponent::OnGimmickComponentActivate(AActor* Activator) {
}


