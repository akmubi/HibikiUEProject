#include "HbkComboJudgeComponent.h"

UHbkComboJudgeComponent::UHbkComboJudgeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetComboType = EHbkComboType::None;
    this->ComboDataTable = NULL;
    this->SuccessSoundData = NULL;
    this->FailedSoundData = NULL;
    this->FinishSoundData = NULL;
}

void UHbkComboJudgeComponent::SetEnableJudge(bool IsEnable) {
}

void UHbkComboJudgeComponent::OnReceiveDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHbkComboJudgeComponent::OnPlayerDodge() {
}

void UHbkComboJudgeComponent::OnPlayerActionEnd() {
}

void UHbkComboJudgeComponent::OnloadCompleted() {
}

void UHbkComboJudgeComponent::OnBeatHitResult(int32 BeatHitId, EHbkBeatHitInputResult InputResult) {
}

void UHbkComboJudgeComponent::OnAttackAnimStart(const FGameplayTag& AttackTag, int32 ComboCount) {
}

bool UHbkComboJudgeComponent::IsPlayingAnyAnimation() {
    return false;
}

bool UHbkComboJudgeComponent::IsEnableJudgeFlag() {
    return false;
}


