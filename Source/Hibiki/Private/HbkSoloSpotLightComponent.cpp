#include "HbkSoloSpotLightComponent.h"

UHbkSoloSpotLightComponent::UHbkSoloSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerConeAngle = 0.00f;
    this->OuterConeAngle = 44.00f;
}


