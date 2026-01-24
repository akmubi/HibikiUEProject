#include "HbkTranslucentLightingVolumeComponent.h"

UHbkTranslucentLightingVolumeComponent::UHbkTranslucentLightingVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->FresnelIntensity1 = 0.10f;
    this->FresnelIntensity2 = 0.50f;
    this->FresnelExponent = 3.00f;
    this->Priority = 0.00f;
    this->bSpecifyTranslucentLitActors = false;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
}


