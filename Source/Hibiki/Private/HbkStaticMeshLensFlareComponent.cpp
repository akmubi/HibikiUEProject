#include "HbkStaticMeshLensFlareComponent.h"

UHbkStaticMeshLensFlareComponent::UHbkStaticMeshLensFlareComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->CastShadow = false;
    this->OverrideMaterials.AddDefaulted(1);
    this->DistanceFadeStart = -1.00f;
    this->DistanceFadeFadeDistance = 500.00f;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
}


