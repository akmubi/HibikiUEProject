#include "HbkBattleStateComponent.h"

UHbkBattleStateComponent::UHbkBattleStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateCheckUserCueName = TEXT("NO_LYRICS");
    this->PreStateCheckUserCueName = TEXT("NO_LYRICS_PRE");
    this->bIsLinkSoundEvent = true;
    this->DamageCorrectionParam.AddDefaulted(3);
    this->BoostDamageRate = 1.20f;
    this->bIsBoostDamageFromPreChangeState = false;
    this->bIsTransitionOnlyByDamage = false;
    this->StayHealthRate = 0.01f;
    this->bIsEnablePreChangeState = false;
}

void UHbkBattleStateComponent::SetPermitChangeNextState(bool bIsPermit) {
}

void UHbkBattleStateComponent::OnUserCuePreNoLyrics(int32 CallCount) {
}

void UHbkBattleStateComponent::OnUserCueNoLyrics(int32 CallCount) {
}

void UHbkBattleStateComponent::OnHealthBecomedZero() {
}

void UHbkBattleStateComponent::OnChangeHealth(float Value, float PrevValue, float ValueRate) {
}

bool UHbkBattleStateComponent::IsPermitChangeNextState() const {
    return false;
}

bool UHbkBattleStateComponent::IsChangeNextState() const {
    return false;
}

int32 UHbkBattleStateComponent::GetStateMaxCount() const {
    return 0;
}

float UHbkBattleStateComponent::GetStateHealth(int32 Index) const {
    return 0.0f;
}

int32 UHbkBattleStateComponent::GetCurrentStateIndex() const {
    return 0;
}

void UHbkBattleStateComponent::DebugChangeBattleState(int32 Index) {
}

void UHbkBattleStateComponent::ChangeBattleState(int32 Index) {
}


