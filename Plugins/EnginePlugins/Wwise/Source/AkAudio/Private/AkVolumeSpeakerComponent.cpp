#include "AkVolumeSpeakerComponent.h"

UAkVolumeSpeakerComponent::UAkVolumeSpeakerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = false;
    this->InsideTickInterval = 0.10f;
    this->OutsideTickInterval = 0.20f;
    this->AttenuationScalingFactor = 1.00f;
    this->OcclusionRefreshInterval = 0.20f;
    this->OcclusionCollisionChannel = ECC_GameTraceChannel2;
    this->ChangeRoomType = AkChangeRoomType::Always;
    this->FadeOutMsWhenStopped = 100.00f;
    this->Ak = NULL;
}

void UAkVolumeSpeakerComponent::SetEnable(bool Enable) {
}


