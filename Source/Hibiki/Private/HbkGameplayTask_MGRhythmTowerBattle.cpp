#include "HbkGameplayTask_MGRhythmTowerBattle.h"

UHbkGameplayTask_MGRhythmTowerBattle::UHbkGameplayTask_MGRhythmTowerBattle() {
    this->SupplyEnemyTask = NULL;
    this->EnemyDiedTask = NULL;
}

void UHbkGameplayTask_MGRhythmTowerBattle::SupplyEnemyEnd() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnWholeEvent_RTBattle(int32 NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnPlayerParryPerfect() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnPlayerBeginJamCombo() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnParryCounter() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnJustDodge() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnFinishedForFade() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnDodgeCounter() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnBeatHitPerfect() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::OnBattleBegun() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::EnemyRhythmParryStartEvent() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::EnemyRhythmParryEndEvent() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::EnemyResetEventFinished() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::EnemyDied() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::EnemyDeadEvent(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn) {
}

void UHbkGameplayTask_MGRhythmTowerBattle::EndResult() {
}

void UHbkGameplayTask_MGRhythmTowerBattle::BeginFinishSlow() {
}


