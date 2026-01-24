#include "HbkRhythmJumpComponent.h"

UHbkRhythmJumpComponent::UHbkRhythmJumpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseNewRhythmJumpParam = false;
    this->RhythmJumpCount = 2;
    this->LandingHeight = 0.00f;
    this->LandingNoteCount = 2;
    this->JumpHeightLsit.AddDefaulted(2);
    this->BeatNum2ndJump = 2;
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpSuccessLastInput() {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpSuccessLanding() {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpSuccessInput(int32 JumpCount) {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpReachedJumpApex() {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpOverLandingHeight() {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpModeStart(int32 JumpCount) {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpFailed(int32 Count) {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpEnd() {
}

void UHbkRhythmJumpComponent::Receive_OnRhythmJumpBeginJump() {
}

void UHbkRhythmJumpComponent::NotifyEndRhythmJumpMode(AActor* Receiver) {
}

void UHbkRhythmJumpComponent::NotifyBeginRhythmJumpMode(AActor* Receiver) {
}


