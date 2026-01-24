#include "HbkEnemyMovementComponent.h"

UHbkEnemyMovementComponent::UHbkEnemyMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputStrafeInterpSpeed = 5.00f;
}

void UHbkEnemyMovementComponent::StopEnemyMovement(bool bRestartStandby) {
}

void UHbkEnemyMovementComponent::RestartEnemyMovement() {
}

void UHbkEnemyMovementComponent::Notify_MontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UHbkEnemyMovementComponent::Input_StrafeMove(float InputRate) {
}


