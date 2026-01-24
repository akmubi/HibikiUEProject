#include "HbkSoloAnalyticFogSpotLightComponent.h"

UHbkSoloAnalyticFogSpotLightComponent::UHbkSoloAnalyticFogSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScatteringCoeff = 50.00f;
    this->Aperture = 0.30f;
    this->RotX = 0.00f;
    this->RotZ = 0.00f;
    this->BaseColorIntensity = 1.00f;
    this->HalftoneIntensity = 1.00f;
    this->DepthFadeDistance = 0.00f;
    this->EdgeFadeExp = 0.00f;
    this->OpacityRate = 1.00f;
}


