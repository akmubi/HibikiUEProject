#include "AkLinearSpeakerComponent.h"

UAkLinearSpeakerComponent::UAkLinearSpeakerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InterpolationDistance = 100.00f;
    this->TickInterval = 0.20f;
    this->AttenuationScalingFactor = 1.00f;
    this->OcclusionRefreshInterval = 0.20f;
    this->OcclusionCollisionChannel = ECC_GameTraceChannel2;
    this->ChangeRoomType = AkChangeRoomType::Once;
    this->FadeOutMsWhenStopped = 100.00f;
    this->bEnable = true;
    this->Ak = NULL;
}

void UAkLinearSpeakerComponent::SetEnable(bool SoundPlay) {
}


