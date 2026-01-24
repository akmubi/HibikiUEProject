#include "HbkEm0812_HoundGhost.h"

AHbkEm0812_HoundGhost::AHbkEm0812_HoundGhost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HologramCharaPostActivateGroup = EHbkHologramCharaPostActivateGroup::HologramCharaPostActivateGroup11;
    this->ShowHologramCharaPostActivateGroupRowName = TEXT("Em0810Ghost_Appear");
    this->HideHologramCharaPostActivateGroupRowName = TEXT("Em0810Ghost_Disappear");
}

void AHbkEm0812_HoundGhost::Receive_OnAbortAttackState(AHbkEnemyCharacter* EmPawn, AHbkEnemyAIController* EmAI) {
}

void AHbkEm0812_HoundGhost::PerformAttack(FGameplayTag AttackTag) {
}

void AHbkEm0812_HoundGhost::OnTriggerHit() {
}

void AHbkEm0812_HoundGhost::OnMontageEnd(UAnimMontage* Montage, bool bInterrupted) {
}

void AHbkEm0812_HoundGhost::OnAdjustLoopEnd() {
}

TArray<float> AHbkEm0812_HoundGhost::GetAttackBlendWeightList() {
    return TArray<float>();
}

void AHbkEm0812_HoundGhost::DelayHideCharacter() {
}

void AHbkEm0812_HoundGhost::DelayEnableShowFlag() {
}


