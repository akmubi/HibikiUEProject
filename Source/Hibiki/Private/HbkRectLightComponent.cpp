#include "HbkRectLightComponent.h"
#include "EHbkLightType.h"

UHbkRectLightComponent::UHbkRectLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadows = false;
    // this->HbkLightType = EHbkLightType::Color;
    // this->bIsHbkLight = true;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
}


