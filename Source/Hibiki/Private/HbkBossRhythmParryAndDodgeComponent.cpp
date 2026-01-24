#include "HbkBossRhythmParryAndDodgeComponent.h"

UHbkBossRhythmParryAndDodgeComponent::UHbkBossRhythmParryAndDodgeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoticeObjectSpawnSE = NULL;
    this->ParrySuccessfullSE = NULL;
    this->SuccessVFX = NULL;
}

void UHbkBossRhythmParryAndDodgeComponent::SetNoticeParam(FAttackNoticeReactionParamForSt06 ReactionParam, UAnimSequenceBase* TriggerHitReactionAnim, bool bIsSuccessIncrementPhase) {
}

void UHbkBossRhythmParryAndDodgeComponent::SetNoteData(const FString& NoteData, int32 NoticeVFXIndex) {
}

void UHbkBossRhythmParryAndDodgeComponent::SetImpactCountSeparation(int32 Count) {
}

void UHbkBossRhythmParryAndDodgeComponent::PlayNotice(int32 Index, bool IsResetNoticedIndex) {
}

void UHbkBossRhythmParryAndDodgeComponent::OnSyncNextAttackImpact(int32 NoteCount) {
}

void UHbkBossRhythmParryAndDodgeComponent::OnRepelled() {
}

void UHbkBossRhythmParryAndDodgeComponent::OnDodge() {
}

void UHbkBossRhythmParryAndDodgeComponent::OnDamaged() {
}

void UHbkBossRhythmParryAndDodgeComponent::CheckDamaged(TArray<FName>& EquipSlotNameList) {
}

void UHbkBossRhythmParryAndDodgeComponent::CancelAttackNotice() {
}

void UHbkBossRhythmParryAndDodgeComponent::BeginNotice() {
}

void UHbkBossRhythmParryAndDodgeComponent::BeginImpact() {
}


