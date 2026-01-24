#include "HbkPlayerAutoActionComponent.h"

UHbkPlayerAutoActionComponent::UHbkPlayerAutoActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoComboDataAsset = NULL;
    this->CheckCallPartnerList.AddDefaulted(3);
}

void UHbkPlayerAutoActionComponent::OnPlayerSuccessParryPerfect() {
}

void UHbkPlayerAutoActionComponent::OnPlayerSuccessParry() {
}

void UHbkPlayerAutoActionComponent::OnPlayerLearnedAbility(EHbkPlayerAppendAbilityType NewAbility) {
}

void UHbkPlayerAutoActionComponent::OnPlayerDodgeStart() {
}

void UHbkPlayerAutoActionComponent::OnPlayerAttackHit(const UDamageType* DamageType) {
}

void UHbkPlayerAutoActionComponent::OnPlayerActionEnd() {
}

void UHbkPlayerAutoActionComponent::OnConsumePlayerReverbGauge(EHbkReverbGaugeConsumeType ConsumeType) {
}

void UHbkPlayerAutoActionComponent::OnAttackAnimStart(const FGameplayTag& AttackTag, int32 ComboCount) {
}

void UHbkPlayerAutoActionComponent::OnAccumulateReverbGauge() {
}


