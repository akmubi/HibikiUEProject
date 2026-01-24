#include "HbkEm7500_AIController.h"

AHbkEm7500_AIController::AHbkEm7500_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElapsedTimeFromAttackPre = 0.00f;
    this->AttackCategorySelectRate = 5;
}

void AHbkEm7500_AIController::SetIsReadyMultiSlash(bool Flag) {
}

void AHbkEm7500_AIController::SetIsMoveTaskRunning(bool Flag) {
}

void AHbkEm7500_AIController::SetIsAttackTaskRunning(bool Flag) {
}

void AHbkEm7500_AIController::SetAttackCategorySelectRate(int32 NewValue) {
}

void AHbkEm7500_AIController::RecordAttackHistory(FGameplayTag AttackNameTag) {
}

bool AHbkEm7500_AIController::IsSelectShortDistanceAttack() const {
    return false;
}

FGameplayTagContainer AHbkEm7500_AIController::GetNextReserveAttackTagP2() {
    return FGameplayTagContainer{};
}

bool AHbkEm7500_AIController::GetIsReadyMultiSlash() {
    return false;
}

bool AHbkEm7500_AIController::GetIsMoveTaskRunning() {
    return false;
}

bool AHbkEm7500_AIController::GetIsAttackTaskRunning() {
    return false;
}

TArray<FGameplayTag> AHbkEm7500_AIController::GetAttackHistory() {
    return TArray<FGameplayTag>();
}

int32 AHbkEm7500_AIController::GetAttackCategorySelectRate() {
    return 0;
}

void AHbkEm7500_AIController::ClearAttackHistory() {
}


