#include "AkRailSpeakerComponent.h"

UAkRailSpeakerComponent::UAkRailSpeakerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkAudioEvent = NULL;
    this->AttenuationScalingFactor = 1.00f;
    this->OcclusionRefreshInterval = 0.20f;
    this->TickInterval = 0.10f;
    this->ChangeRoomType = AkChangeRoomType::Once;
    this->curveType = AkRailCurveType::LINEAR;
    this->UseMoveTime = true;
    this->MoveTime = 1.00f;
    this->Ak = NULL;
}

void UAkRailSpeakerComponent::Stop(int32 FadeTimeMs) {
}

void UAkRailSpeakerComponent::Start() {
}

void UAkRailSpeakerComponent::Resume() {
}

void UAkRailSpeakerComponent::Pause() {
}


