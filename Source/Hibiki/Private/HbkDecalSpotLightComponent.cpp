#include "HbkDecalSpotLightComponent.h"

UHbkDecalSpotLightComponent::UHbkDecalSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerConeAngle = 0.00f;
    this->OuterConeAngle = 44.00f;
    this->CutoutLightAttenuation1 = 0.50f;
    this->CutoutLightAttenuation2 = 0.30f;
    this->CutoutLightAttenuation3 = 0.10f;
    this->CutoutBaseColorAttenuation1 = 1.00f;
    this->CutoutBaseColorAttenuation2 = 1.00f;
    this->CutoutBaseColorAttenuation3 = 1.00f;
}

void UHbkDecalSpotLightComponent::SetOuterConeAngle(const float InOuterConeAngle) {
}

void UHbkDecalSpotLightComponent::SetInnerConeAngle(const float InInnerConeAngle) {
}


