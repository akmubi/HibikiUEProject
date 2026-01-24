#include "HbkGameplayTask_EVSpectraRoomBattle.h"

UHbkGameplayTask_EVSpectraRoomBattle::UHbkGameplayTask_EVSpectraRoomBattle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Dialog = NULL;
    this->ScreenTransitionTask = NULL;
    this->SpectraBattleController = NULL;
    this->SpectraRoomController = NULL;
    this->SettingsData = NULL;
}

void UHbkGameplayTask_EVSpectraRoomBattle::StartBattleScreenTransitionHalfDuration() {
}

void UHbkGameplayTask_EVSpectraRoomBattle::StartBattleScreenTransitionFinished() {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnSpectraBattleFinish(bool bResult) {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnSpectraBattleBegun() {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnSpectraBattleBeginResult() {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnFailedSpectraBattle() {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnCancelRetryMenu(int32 ButtonNo) {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnCancelChallengeConfirmMenu(int32 ButtonNo) {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnAcceptRetryMenu(int32 ButtonNo) {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnAcceptChallengeImpossibleMenu(int32 ButtonNo) {
}

void UHbkGameplayTask_EVSpectraRoomBattle::OnAcceptChallengeConfirmMenu(int32 ButtonNo) {
}

UHbkGameplayTask_EVSpectraRoomBattle* UHbkGameplayTask_EVSpectraRoomBattle::EventSpectraRoomBattle(UObject* WorldContextObject, UHbkSpectraBattleController* NewSpectraBattleController) {
    return NULL;
}

void UHbkGameplayTask_EVSpectraRoomBattle::BeforeBattleAreaScreenTransitionHalfDuration() {
}

void UHbkGameplayTask_EVSpectraRoomBattle::BeforeBattleAreaScreenTransitionFinished() {
}


