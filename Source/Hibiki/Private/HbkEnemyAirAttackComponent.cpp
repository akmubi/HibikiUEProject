#include "HbkEnemyAirAttackComponent.h"

UHbkEnemyAirAttackComponent::UHbkEnemyAirAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackCountMax = 2;
    this->LengthNoteNum = 2;
    this->AreaRadius = 150.00f;
    this->FollowSpeed = 500.00f;
    this->AttackAreaEffect = NULL;
}

void UHbkEnemyAirAttackComponent::StopAirAttack() {
}

void UHbkEnemyAirAttackComponent::BeginAirAttack() {
}


