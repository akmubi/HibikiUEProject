#include "HbkPointLightComponent.h"
#include "EHbkLightType.h"

UHbkPointLightComponent::UHbkPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadows = false;
    // this->HbkLightType = EHbkLightType::Color;
    // this->bIsHbkLight = true;
    this->bUseInverseSquaredFalloff = false;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
}


