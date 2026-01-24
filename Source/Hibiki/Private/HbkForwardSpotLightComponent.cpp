#include "HbkForwardSpotLightComponent.h"

UHbkForwardSpotLightComponent::UHbkForwardSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerConeAngle = 0.00f;
    this->OuterConeAngle = 44.00f;
    this->CutoutLightAttenuation1 = 0.50f;
    this->CutoutLightAttenuation2 = 0.30f;
    this->CutoutLightAttenuation3 = 0.10f;
    this->CutoutBaseColorAttenuation1 = 0.80f;
    this->CutoutBaseColorAttenuation2 = 0.70f;
    this->CutoutBaseColorAttenuation3 = 0.60f;
}


