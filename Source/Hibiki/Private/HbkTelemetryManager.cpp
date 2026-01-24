#include "HbkTelemetryManager.h"

UHbkTelemetryManager::UHbkTelemetryManager() {
    this->BattleManager = NULL;
    this->ObjectInfoGameProgressTablePtr = NULL;
    this->ObjectInfoCharacterTablePtr = NULL;
    this->ObjectInfoActionTablePtr = NULL;
    this->ObjectInfoItemTablePtr = NULL;
    this->ObjectInfoChallengeTablePtr = NULL;
    this->SpectraRoomInfoTablePtr = NULL;
    this->bSendEventsEnabled = true;
}

void UHbkTelemetryManager::OnStageCompleted(int32 TotalScore, int32 StageRank, const TArray<FHbkStageResultDetail>& BattleDetails, const FHbkStageResultStats& StageStats) {
}

void UHbkTelemetryManager::OnPlayerDied() {
}

void UHbkTelemetryManager::OnExtraChallengeUnlocked(const FHbkHideOutExtraChallengeParamRow& ChallengeParam, const FHbkHideOutExtraChallengeProgressChallengeParam& ChallengeProgress) {
}

void UHbkTelemetryManager::OnChallengeUnlocked(const FHbkHideOutChallengeParamRow& ChallengeParam, const FHbkHideOutChallengeProgressChallengeParam& ChallengeProgress) {
}

void UHbkTelemetryManager::OnBattleStarted() {
}

void UHbkTelemetryManager::OnBattleCompleted(const FHbkBattleResultParam& BattleResult, EHbkBattleResultType ResultType) {
}

void UHbkTelemetryManager::K2_Notify_PlayWith808(UObject* WorldContextObject) {
}


