#include "HbkEm6000_BehaviorBaseComponent.h"

UHbkEm6000_BehaviorBaseComponent::UHbkEm6000_BehaviorBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RhythmSynchroComponent = NULL;
    this->DamageComponent = NULL;
    this->BossSelectTagComponent = NULL;
    this->GuardComponent = NULL;
    this->TargetStateIndex = -1;
    this->SystemTimer = 0.00f;
    this->bIsSystemEnable = false;
}

void UHbkEm6000_BehaviorBaseComponent::SetSystemEnable(bool bIsEnable) {
}

void UHbkEm6000_BehaviorBaseComponent::OnChangeStateIndex(int32 NewStateIndex) {
}

void UHbkEm6000_BehaviorBaseComponent::OnChangeHealthEvent(float Value, float PrevValue, float ValueRate) {
}

void UHbkEm6000_BehaviorBaseComponent::OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType PartnerAttackType) {
}

bool UHbkEm6000_BehaviorBaseComponent::IsSystemEnabled() const {
    return false;
}


