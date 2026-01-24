#include "AkSphereComponent2.h"

UAkSphereComponent2::UAkSphereComponent2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickInterval = 0.20f;
    this->AttenuationScalingFactor = 1.00f;
    this->OcclusionRefreshInterval = 0.20f;
    this->OcclusionCollisionChannel = ECC_GameTraceChannel2;
    this->EnableChangeRoom = true;
    this->ChangeRoomType = AkChangeRoomType::Once;
    this->bEnable = true;
    this->Ak = NULL;
}

bool UAkSphereComponent2::IsPlaying() {
    return false;
}

void UAkSphereComponent2::AppendAkEvent(UAkAudioEvent* Event) {
}


