#include "HbkEnemyTackleAttackComponent.h"

UHbkEnemyTackleAttackComponent::UHbkEnemyTackleAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackLocationBBKeyName = TEXT("AttackLocation");
    this->MoveNoteCount = 1;
    this->bUseCurveAsset = false;
    this->MoveCurveAsset = NULL;
    this->bIsDirection2D = false;
}

void UHbkEnemyTackleAttackComponent::StartAttack() {
}

void UHbkEnemyTackleAttackComponent::EndAttack() {
}

void UHbkEnemyTackleAttackComponent::CancelAttack(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void UHbkEnemyTackleAttackComponent::CallbackBeatEvent(int32 BeatCount) {
}


