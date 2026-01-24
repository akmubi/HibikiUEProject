#include "HbkEnemyAttackNoticeComponent.h"

UHbkEnemyAttackNoticeComponent::UHbkEnemyAttackNoticeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoticeObjectSpawnSE = NULL;
    this->ParrySuccessfullSE = NULL;
    this->TriggerHealthRate = 0.20f;
    this->bOnTriggerHitToIdle = true;
    this->bCancelOnPlayerDied = true;
    this->bIsDefaultParryEnable = true;
    this->SectionNamePreTutorial = TEXT("TriggerHit");
}

void UHbkEnemyAttackNoticeComponent::SetTriggerHealthRate(float NewRate) {
}

void UHbkEnemyAttackNoticeComponent::SetNoticeParam(FAttackNoticeReactionParam ReactionParam, UAnimSequenceBase* TriggerHitReactionAnim) {
}

void UHbkEnemyAttackNoticeComponent::SetNoteData(const FString& NoteData) {
}

void UHbkEnemyAttackNoticeComponent::SetEnableRhythmParry(bool Enable) {
}

void UHbkEnemyAttackNoticeComponent::SetEnableEasyJudgeMode(bool Enable) {
}

void UHbkEnemyAttackNoticeComponent::SetCanTransitHealthTriggerEvent(bool Enable) {
}

void UHbkEnemyAttackNoticeComponent::SetBossRhythmParryParameter(FBossRhythmAttackParam NewParam) {
}

void UHbkEnemyAttackNoticeComponent::ReEnableParry() {
}

void UHbkEnemyAttackNoticeComponent::Receive_OnEndEffective(FGameplayTag StatusEffectTag) {
}

void UHbkEnemyAttackNoticeComponent::Receive_OnChangedHealth(float CurrentHealth, float OldHealth, float HealthRate) {
}

void UHbkEnemyAttackNoticeComponent::Receive_OnAbortAttackState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}

void UHbkEnemyAttackNoticeComponent::OnSyncNextAttackImpact(int32 NoteCount) {
}

void UHbkEnemyAttackNoticeComponent::OnLocationAdjustedAction(AHbkEnemyCharacter* AttackerPawn, FVector TargetLocation, bool bIsKeepCurrentLocAndRot) {
}

void UHbkEnemyAttackNoticeComponent::OnBeatAdjustLoopEvent(int32 NoteCount) {
}

void UHbkEnemyAttackNoticeComponent::Notify_OnRepelled(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam) {
}

void UHbkEnemyAttackNoticeComponent::Notify_OnAttackDodged() {
}

bool UHbkEnemyAttackNoticeComponent::IsHealthTriggered() const {
    return false;
}

bool UHbkEnemyAttackNoticeComponent::IsEnableRhythmParry() const {
    return false;
}

bool UHbkEnemyAttackNoticeComponent::IsEnableEasyJudgeMode() const {
    return false;
}

float UHbkEnemyAttackNoticeComponent::GetTriggerHealthRate() const {
    return 0.0f;
}

FBossRhythmAttackParam UHbkEnemyAttackNoticeComponent::GetBossRhythmParryParameter() {
    return FBossRhythmAttackParam{};
}

void UHbkEnemyAttackNoticeComponent::DisableInvincible() {
}

void UHbkEnemyAttackNoticeComponent::CancelAttackNotice() {
}

void UHbkEnemyAttackNoticeComponent::BeginNotice() {
}

void UHbkEnemyAttackNoticeComponent::BeginImpact() {
}


