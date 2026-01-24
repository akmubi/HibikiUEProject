#include "HbkPostProcessVolumeGameComponent.h"

UHbkPostProcessVolumeGameComponent::UHbkPostProcessVolumeGameComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEnvShadowOnlyLight = true;
    this->bUseEmissiveDecals = false;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
    this->ShadowVolumePhaseActor = NULL;
    this->ShadowVolume2PhaseActor = NULL;
    this->ShadowVolume3PhaseActor = NULL;
    this->ShadowVolume4PhaseActor = NULL;
    this->AmbientCubemapVolumePhaseActor = NULL;
    this->GameEnvShadowColorLUT = NULL;
    this->GameEnvShadowColorLUT2 = NULL;
    this->GameEnvShadowColorLUT3 = NULL;
    this->GameEnvShadowColorLUT4 = NULL;
    this->bOverrideAmbientCubemapTex = false;
    this->GameEnvAmbientCubemapTex = NULL;
}


