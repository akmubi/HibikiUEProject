#include "HbkEm6000_AIController.h"

AHbkEm6000_AIController::AHbkEm6000_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReceiveSignalCueEvent = false;
}

void AHbkEm6000_AIController::UpdateSignalAttackInfo(float DeltaTime) {
}

void AHbkEm6000_AIController::SetRunningBeforeSignalAttack(bool bEnable) {
}

void AHbkEm6000_AIController::SetReceiveSignalCueEvent(bool bIsReceive) {
}

void AHbkEm6000_AIController::ResetSignalAttackInfo() {
}

void AHbkEm6000_AIController::ReceivedNotifySignalAttackPre(const FGameplayTag& SignalAttackTag) {
}

bool AHbkEm6000_AIController::IsRunningBeforeSignalAttackTask() const {
    return false;
}

bool AHbkEm6000_AIController::IsReceiveSignalCueEvent() const {
    return false;
}

bool AHbkEm6000_AIController::HaveTimeBeforeExecuteSignalAttack(int32 BeatCount, float TimeLag) const {
    return false;
}

int32 AHbkEm6000_AIController::GetSignalAttackWaitBeatCount() const {
    return 0;
}

FGameplayTag AHbkEm6000_AIController::GetSignalAttackTag() const {
    return FGameplayTag{};
}

float AHbkEm6000_AIController::GetRemainTimeToExecuteSignalAttack(float TimeLag) const {
    return 0.0f;
}

float AHbkEm6000_AIController::GetRemainBeatCountToExecuteSignalAttack(float TimeLag) const {
    return 0.0f;
}

float AHbkEm6000_AIController::GetElapsedTimeFromReceivedNotifySignalAttackPre() const {
    return 0.0f;
}


