#include "HbkGameplayTask_EVLab.h"

UHbkGameplayTask_EVLab::UHbkGameplayTask_EVLab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BattleStartTask = NULL;
    this->BattleResultTask = NULL;
    this->SupplyEnemyTask = NULL;
    this->EnemyDiedTask = NULL;
}

void UHbkGameplayTask_EVLab::TutorialSkip() {
}

void UHbkGameplayTask_EVLab::OnTalkEnded(const FHbkTalkContext TalkContext) {
}

void UHbkGameplayTask_EVLab::OnSuppiliedLaserTrap() {
}

void UHbkGameplayTask_EVLab::OnSuppiliedEnemy() {
}

void UHbkGameplayTask_EVLab::OnPreSuppiliedEnemy() {
}

void UHbkGameplayTask_EVLab::OnPlayerParrySuccessPerfect() {
}

void UHbkGameplayTask_EVLab::OnPlayerParrySuccessNice() {
}

void UHbkGameplayTask_EVLab::OnEnemyDiedSuccess() {
}

void UHbkGameplayTask_EVLab::OnEnemyAttackParrySuccess(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void UHbkGameplayTask_EVLab::OnEndEnemyAttackState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void UHbkGameplayTask_EVLab::OnDeadLaserTrap() {
}

void UHbkGameplayTask_EVLab::OnDamagDoneLaserTrap() {
}

void UHbkGameplayTask_EVLab::OnBattleResultEnded() {
}

void UHbkGameplayTask_EVLab::OnBattleBegun() {
}

FName UHbkGameplayTask_EVLab::GetIdentifier() const {
    return NAME_None;
}

FHbkGameplayTask_EVLabEventType UHbkGameplayTask_EVLab::GetEventType() const {
    return FHbkGameplayTask_EVLabEventType::PreSupply;
}

UHbkGameplayTask_EVLab* UHbkGameplayTask_EVLab::EventLab(UObject* WorldContextObject, UHbkGameplayTask_EVLabSettingsDataAsset* SettingsData) {
    return NULL;
}

void UHbkGameplayTask_EVLab::End() {
}

void UHbkGameplayTask_EVLab::Continue() {
}


