#include "HbkGameplayTask_EVLaserBattle.h"

UHbkGameplayTask_EVLaserBattle::UHbkGameplayTask_EVLaserBattle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsData = NULL;
    this->BattleStartTask = NULL;
    this->PlayerInterpMove = NULL;
    this->FillingEnemyLeft = NULL;
    this->FillingEnemyRight = NULL;
}

void UHbkGameplayTask_EVLaserBattle::StartMagnetFocalSettings() {
}

void UHbkGameplayTask_EVLaserBattle::PlayBeginBattle() {
}

void UHbkGameplayTask_EVLaserBattle::OnSuppiliedEnemy() {
}

void UHbkGameplayTask_EVLaserBattle::OnPlayerMoveEnded() {
}

void UHbkGameplayTask_EVLaserBattle::OnJumpToEnd() {
}

void UHbkGameplayTask_EVLaserBattle::OnBattleBegun() {
}

UHbkGameplayTask_EVLaserBattle* UHbkGameplayTask_EVLaserBattle::EventLaserBattle(UObject* WorldContextObject, UHbkGameplayTask_EVLaserBattleSettingsDataAsset* NewSettingsData) {
    return NULL;
}

void UHbkGameplayTask_EVLaserBattle::EndMagnetFocalSettings() {
}

void UHbkGameplayTask_EVLaserBattle::End() {
}


