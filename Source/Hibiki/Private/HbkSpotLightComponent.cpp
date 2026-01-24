#include "HbkSpotLightComponent.h"
#include "EHbkLightType.h"

UHbkSpotLightComponent::UHbkSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadows = false;
    // this->HbkLightType = EHbkLightType::Color;
    // this->bIsHbkLight = true;
    this->bUseInverseSquaredFalloff = false;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
}


