#include "HbkPostProcessLensFlareComponent.h"

UHbkPostProcessLensFlareComponent::UHbkPostProcessLensFlareComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->DistanceFadeStart = 0.00f;
    this->DistanceFadeFadeDistance = 3000.00f;
    this->FadeOutTime = 0.00f;
    this->ScreenCenterOffsetU = 0.00f;
    this->ScreenCenterOffsetV = 0.00f;
}


