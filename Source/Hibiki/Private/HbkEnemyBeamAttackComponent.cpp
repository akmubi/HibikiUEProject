#include "HbkEnemyBeamAttackComponent.h"
#include "Templates/SubclassOf.h"

UHbkEnemyBeamAttackComponent::UHbkEnemyBeamAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageType = NULL;
}

void UHbkEnemyBeamAttackComponent::SetTargetPoint(FVector NewTargetPoint) {
}

void UHbkEnemyBeamAttackComponent::SetSourcePoint(FVector NewSourcePoint) {
}

void UHbkEnemyBeamAttackComponent::SetOverrideDamageType(TSubclassOf<UDamageType> NewDamageType) {
}

void UHbkEnemyBeamAttackComponent::AttackUpdate() {
}

void UHbkEnemyBeamAttackComponent::AttackEnd() {
}

void UHbkEnemyBeamAttackComponent::AttackBegin() {
}


