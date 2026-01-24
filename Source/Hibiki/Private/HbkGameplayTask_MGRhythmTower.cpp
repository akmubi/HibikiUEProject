#include "HbkGameplayTask_MGRhythmTower.h"

UHbkGameplayTask_MGRhythmTower::UHbkGameplayTask_MGRhythmTower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pRTLoadLevel = NULL;
    this->pRTBattle = NULL;
    this->pRTPopupTimer = NULL;
    this->pRTInformationSign = NULL;
    this->pRTSound = NULL;
    this->pRTPrepare = NULL;
    this->pRTTutorial = NULL;
    this->pRTResult = NULL;
    this->pTimerWidget = NULL;
    this->pPopupWidget = NULL;
}

void UHbkGameplayTask_MGRhythmTower::StartRhythmTower(FName LevelName, FName SoundName) {
}

void UHbkGameplayTask_MGRhythmTower::ShowRhythmTowerTimer() {
}

UHbkGameplayTask_MGRhythmTower* UHbkGameplayTask_MGRhythmTower::RhythmTowerTask(UObject* WorldContextObject, UHbkMGRhythmTower_DataAsset* DataAsset, FName DebugLevelName, FName DebugSoundName) {
    return NULL;
}

void UHbkGameplayTask_MGRhythmTower::ResumeRhythmTowerGame() {
}

void UHbkGameplayTask_MGRhythmTower::PauseRhythmTowerGame(bool StopScore) {
}

void UHbkGameplayTask_MGRhythmTower::OnStartGameOverWidget() {
}

void UHbkGameplayTask_MGRhythmTower::OnStartGameOver() {
}

void UHbkGameplayTask_MGRhythmTower::OnRhythmTowerRetry() {
}

void UHbkGameplayTask_MGRhythmTower::OnFinishedForFade() {
}

void UHbkGameplayTask_MGRhythmTower::HideRhythmTowerTimer() {
}

void UHbkGameplayTask_MGRhythmTower::FinishTutorial() {
}

void UHbkGameplayTask_MGRhythmTower::FinishRhythmTowerBossBattle() {
}

void UHbkGameplayTask_MGRhythmTower::FinishKorsicaTutorial() {
}

void UHbkGameplayTask_MGRhythmTower::BeginRhythmTowerBossBattle() {
}

void UHbkGameplayTask_MGRhythmTower::BeginRhythmTowerBattle() {
}

void UHbkGameplayTask_MGRhythmTower::AddRhythmTowerBossBonus(EHbkMGRhythmTower_BossBonusType BonusType) {
}


