#include "HbkGameplayTask_BPMRushBattle.h"

UHbkGameplayTask_BPMRushBattle::UHbkGameplayTask_BPMRushBattle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BPMRushController = NULL;
    this->SettingsData = NULL;
    this->DifficultySettingsData = NULL;
    this->BattleStartTask = NULL;
    this->SupplyEnemyTask = NULL;
    this->ScreenTransitionTask = NULL;
}

void UHbkGameplayTask_BPMRushBattle::WaitBeginBattle(int32 NoteCount, bool bOnBeat) {
}

void UHbkGameplayTask_BPMRushBattle::SuppiliedEnemyGroup() {
}

void UHbkGameplayTask_BPMRushBattle::StartLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void UHbkGameplayTask_BPMRushBattle::StartEnemySupplyCamera(int32 NoteCount, bool bOnBeat) {
}

void UHbkGameplayTask_BPMRushBattle::RhythmGaugeChangePoint(float ChangeValue) {
}

void UHbkGameplayTask_BPMRushBattle::RestoreEnemySupplyCamera() {
}

void UHbkGameplayTask_BPMRushBattle::PostEnemySupplyCamera() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerRhythmParryPerfect() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerRhythmParryGood() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerRhythmJustTiming(int32 Count) {
}

void UHbkGameplayTask_BPMRushBattle::PlayerParrySuccess() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerParryPerfect() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerParryCounter() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerHealthDamage(float Value) {
}

void UHbkGameplayTask_BPMRushBattle::PlayerEndSpecialAttack() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerEndJamComboAttack() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerDodgeCounter() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerDamageConfirmed() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerBeginSpecialAttack(bool bIncludingCamera) {
}

void UHbkGameplayTask_BPMRushBattle::PlayerBeginJamComboAttack() {
}

void UHbkGameplayTask_BPMRushBattle::PlayerAttackGaveDamage(const UDamageType* DamageType) {
}

void UHbkGameplayTask_BPMRushBattle::PartnerAttackGaveDamage(const UDamageType* DamageType) {
}

void UHbkGameplayTask_BPMRushBattle::FinishAppearEnemyGaugePerformance() {
}

void UHbkGameplayTask_BPMRushBattle::EnemyStartRhythmParry() {
}

void UHbkGameplayTask_BPMRushBattle::EnemyRhythmParrySuccessful(AHbkEnemyCharacter* EnemyPawn, bool bIsParryAllPerfectr) {
}

void UHbkGameplayTask_BPMRushBattle::EnemyEndRhythmParry() {
}

void UHbkGameplayTask_BPMRushBattle::EndLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void UHbkGameplayTask_BPMRushBattle::EndEnemySupplyCamera() {
}

void UHbkGameplayTask_BPMRushBattle::DuringEnemySupplyCamera() {
}

void UHbkGameplayTask_BPMRushBattle::DeadEnemy(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn) {
}

void UHbkGameplayTask_BPMRushBattle::ComboCountUp(int32 ComboCount, bool bScoreBonus) {
}

void UHbkGameplayTask_BPMRushBattle::ComboCountClear() {
}

void UHbkGameplayTask_BPMRushBattle::ChangeEnemySupplyCamera() {
}

void UHbkGameplayTask_BPMRushBattle::BeatHitSuccess() {
}

void UHbkGameplayTask_BPMRushBattle::BeatHitPerfect() {
}

void UHbkGameplayTask_BPMRushBattle::BattleBegun() {
}


