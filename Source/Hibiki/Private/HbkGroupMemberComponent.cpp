#include "HbkGroupMemberComponent.h"

UHbkGroupMemberComponent::UHbkGroupMemberComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BBKeyName_AttackInterval = TEXT("AttackInterval");
    this->BBKeyName_TargetDist = TEXT("DistanceTo");
    this->BaseBattleDistance = 500.00f;
    this->AttackFrequencyRate = 1.00f;
    this->ContinuousAttackCount = 1;
    this->ScaleType = 1;
}

void UHbkGroupMemberComponent::Receive_OnBeginDamageState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}

bool UHbkGroupMemberComponent::IsContinuousAttackable() {
    return false;
}

void UHbkGroupMemberComponent::Initialize() {
}

int32 UHbkGroupMemberComponent::GetScaleType() const {
    return 0;
}

int32 UHbkGroupMemberComponent::GetContinuousAttackableCount() {
    return 0;
}

float UHbkGroupMemberComponent::GetBaseBattleDistance() const {
    return 0.0f;
}


