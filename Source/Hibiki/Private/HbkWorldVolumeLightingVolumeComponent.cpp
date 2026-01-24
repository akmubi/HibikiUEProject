#include "HbkWorldVolumeLightingVolumeComponent.h"

UHbkWorldVolumeLightingVolumeComponent::UHbkWorldVolumeLightingVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
}


