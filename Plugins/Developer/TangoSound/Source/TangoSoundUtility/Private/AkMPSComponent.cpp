#include "AkMPSComponent.h"

UAkMPSComponent::UAkMPSComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkAudioEvent = NULL;
    this->AutoPost = false;
    this->TickInterval = 0.33f;
    this->bMusicSyncMode = false;
}

void UAkMPSComponent::Stop() {
}

void UAkMPSComponent::Start() {
}

void UAkMPSComponent::EndOfEvent(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UAkMPSComponent::AddMPL(UAkMPLComponent* cmp) {
}


