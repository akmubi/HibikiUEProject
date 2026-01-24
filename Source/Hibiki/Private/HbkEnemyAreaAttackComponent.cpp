#include "HbkEnemyAreaAttackComponent.h"

UHbkEnemyAreaAttackComponent::UHbkEnemyAreaAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageType = NULL;
    this->bIsEffectAttach = false;
    this->AreaEffect = NULL;
    this->WaitNoteNum = 4;
    this->AreaRadius = 1000.00f;
    this->bIsDrawAreaDebug = false;
    this->bIsLocationLockWhenAttacking = false;
}

void UHbkEnemyAreaAttackComponent::StartAreaAttack(const FVector& Pos) {
}

void UHbkEnemyAreaAttackComponent::Receive_OnAbortAttackState(AHbkEnemyCharacter* EmPawn, AHbkEnemyAIController* EmAI) {
}

void UHbkEnemyAreaAttackComponent::ExecuteAreaAttack() {
}

void UHbkEnemyAreaAttackComponent::EndAreaAttack() {
}

void UHbkEnemyAreaAttackComponent::CancelAreaAttack() {
}

void UHbkEnemyAreaAttackComponent::CallbackBeatEvent(int32 BeatCount) {
}


