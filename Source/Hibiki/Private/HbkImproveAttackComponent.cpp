#include "HbkImproveAttackComponent.h"
#include "Templates/SubclassOf.h"

UHbkImproveAttackComponent::UHbkImproveAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultDamageType = NULL;
    this->DamageType = NULL;
}

void UHbkImproveAttackComponent::SetHitShapeInfo(const FHbkAttackHitShapeInfo& ShapeInfo) {
}

void UHbkImproveAttackComponent::SetAttackMoveInfo(const FHbkAttackMoveInfo InMoveInfo) {
}

void UHbkImproveAttackComponent::RefreshAttack() {
}

void UHbkImproveAttackComponent::OnRefreshAttackTakeBeat(int32 NoteCount, bool bOnBeat) {
}

void UHbkImproveAttackComponent::OnRefreshAttack(int32 NoteCount) {
}

bool UHbkImproveAttackComponent::IsAttacking() const {
    return false;
}

TSubclassOf<UDamageType> UHbkImproveAttackComponent::GetDamageType() const {
    return NULL;
}

void UHbkImproveAttackComponent::EndAttack() {
}

void UHbkImproveAttackComponent::BeginAttack() {
}


