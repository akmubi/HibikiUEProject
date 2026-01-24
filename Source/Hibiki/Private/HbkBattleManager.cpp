#include "HbkBattleManager.h"

UHbkBattleManager::UHbkBattleManager() {
    this->BattleManagerAsset = NULL;
    this->BattleStartPlayerEffect = NULL;
    this->BattleStartEnemyEffect = NULL;
    this->BattleStartEnemyEffect_Small = NULL;
    this->BattleStartPlayerSE = NULL;
    this->SyncRateParamName = TEXT("GP_Mu_Sync_Rate_01");
    this->AudienceLoopStartSE = NULL;
    this->AudienceLoopEndSE = NULL;
    this->AudienceOnBeatSE = NULL;
    this->AudienceOffBeatSE = NULL;
}

void UHbkBattleManager::ShowStageResult(bool bNextSelectPopup) {
}

void UHbkBattleManager::ShowBattleResult(FVector2D Offset) {
}

void UHbkBattleManager::SetSuspendScoreRecord(bool Suspend, bool bSyncUI) {
}

void UHbkBattleManager::SetSuspendAutoDecrease(bool Suspend) {
}

void UHbkBattleManager::SetEnableLastHit(bool Enable) {
}

void UHbkBattleManager::SetBattleResultType(EHbkBattleResultType NewType) {
}

void UHbkBattleManager::ResetRhythmMeterRank() {
}

void UHbkBattleManager::ResetEnemyGroupNames(const TArray<FName>& GroupNames) {
}

void UHbkBattleManager::Receive_OnStepForwardGameSequence() {
}

void UHbkBattleManager::Receive_OnStartGameOver() {
}

void UHbkBattleManager::Receive_OnRecoverDying() {
}

void UHbkBattleManager::Receive_OnPlayerDying() {
}

void UHbkBattleManager::Receive_OnEndedFinishCamera() {
}

void UHbkBattleManager::Receive_OnDeadEnemy(AHbkEnemyCharacter* DeadEnemyPawn, AHbkCharacter* CauserPawn) {
}

void UHbkBattleManager::Receive_EndStageResult() {
}

void UHbkBattleManager::Receive_EndDisplayResult() {
}

void UHbkBattleManager::Receive_BeatEvent(int32 NoteCount, bool OnBeat) {
}

void UHbkBattleManager::Receive_BarEvent(int32 NoteCount, bool OnBeat) {
}

void UHbkBattleManager::Receive_AudienceBeatEvent(int32 NoteCount, bool OnBeat) {
}

void UHbkBattleManager::OnNextBeatForRhythmMeter(int32 NoteCount, bool bDownBeat) {
}

void UHbkBattleManager::OnFinishBlowHit(AActor* Attacker, AActor* Victim) {
}

void UHbkBattleManager::NotifyQuickBeginBattle(int32 BattleId, bool NotRecordScore) {
}

void UHbkBattleManager::NotifyEndBattle(bool bSkipResult) {
}

void UHbkBattleManager::NotifyBeginBattle(int32 BattleId, bool SkipPrepare, bool SkipAnim, bool NotRecordScore) {
}

void UHbkBattleManager::NotifyAbortBattle() {
}

bool UHbkBattleManager::IsRecordScore() const {
    return false;
}

bool UHbkBattleManager::IsNearEnemy() const {
    return false;
}

bool UHbkBattleManager::IsInBattle() const {
    return false;
}

bool UHbkBattleManager::IsEnableLastHit() const {
    return false;
}

void UHbkBattleManager::Hbk_ShowBattleResult(UObject* WorldContextObject, FVector2D Offset) {
}

int32 UHbkBattleManager::GetStageRank(int32 ContinueCount, bool& bRankDownByContinue) const {
    return 0;
}

float UHbkBattleManager::GetScoreBonusTimeRate(EHbkScoreActionType ActionType) const {
    return 0.0f;
}

float UHbkBattleManager::GetRhythmMeterRank() const {
    return 0.0f;
}

float UHbkBattleManager::GetRhythmMeterAccumulatedValue() const {
    return 0.0f;
}

float UHbkBattleManager::GetRhythmMeterAccumulatedRate() const {
    return 0.0f;
}

int32 UHbkBattleManager::GetRankBonusPoint(int32 Rank) const {
    return 0;
}

int32 UHbkBattleManager::GetJustTimingRank(float Percent) const {
    return 0;
}

int32 UHbkBattleManager::GetCurrentBattleScore() const {
    return 0;
}

int32 UHbkBattleManager::GetBattleTimeRank(int32 BattleId, float Time) const {
    return 0;
}

int32 UHbkBattleManager::GetBattleScoreRank(int32 BattleId, float Score) const {
    return 0;
}

int32 UHbkBattleManager::GetBattleRank(int32 ScoreRank, int32 JustTimingRank, int32 TimeRank) const {
    return 0;
}

int32 UHbkBattleManager::GetAliveEnemyCount() {
    return 0;
}

void UHbkBattleManager::DebugStageResult() {
}

void UHbkBattleManager::DebugChangeRhythmRank(const FString& RankString) {
}

void UHbkBattleManager::ClearBattleManager() {
}

void UHbkBattleManager::ChangeRhythmMeterAmount(EHbkRhythmMeterActionType ActionType) {
}


