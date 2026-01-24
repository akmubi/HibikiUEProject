#include "AkRandomComponent.h"

UAkRandomComponent::UAkRandomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkAudioEvent = NULL;
    this->NumSimultaneousSounds = 1;
    this->Distance = 1000.00f;
    this->PlayTime = 10.00f;
    this->RandomizerPlayTime = false;
    this->PlayTimeMinOffset = 0.00f;
    this->PlayTimeMaxOffset = 0.00f;
    this->WaitTime = 2.00f;
    this->RandomizerWaitTime = false;
    this->WaitTimeMinOffset = 0.00f;
    this->WaitTimeMaxOffset = 0.00f;
    this->FadeOutTime = 0.00f;
    this->TickInterval = 0.20f;
    this->UseAkComponent = false;
    this->bDebugDraw = false;
}

void UAkRandomComponent::Stop() {
}

void UAkRandomComponent::Start() {
}


