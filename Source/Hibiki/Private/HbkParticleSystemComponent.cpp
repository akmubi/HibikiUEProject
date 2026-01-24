#include "HbkParticleSystemComponent.h"

UHbkParticleSystemComponent::UHbkParticleSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSkipCameraMotionBlur = false;
}

void UHbkParticleSystemComponent::SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur) {
}

bool UHbkParticleSystemComponent::GetSkipCameraMotionBlur() const {
    return false;
}


