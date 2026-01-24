#include "HbkGameplayTask_MGRhythmTowerPrepare.h"

UHbkGameplayTask_MGRhythmTowerPrepare::UHbkGameplayTask_MGRhythmTowerPrepare() {
    this->pKorsica = NULL;
    this->DialogTask = NULL;
    this->pRestTimeWidget = NULL;
    this->pRTResult = NULL;
}

void UHbkGameplayTask_MGRhythmTowerPrepare::OnSuspendSave() {
}

void UHbkGameplayTask_MGRhythmTowerPrepare::OnReady() {
}

float UHbkGameplayTask_MGRhythmTowerPrepare::OnPurchaseProduct(const FText& ProductName, float CostTime) {
    return 0.0f;
}

void UHbkGameplayTask_MGRhythmTowerPrepare::OnKorsicaEnd() {
}

void UHbkGameplayTask_MGRhythmTowerPrepare::OnInteraction() {
}

void UHbkGameplayTask_MGRhythmTowerPrepare::OnGiveUp() {
}

void UHbkGameplayTask_MGRhythmTowerPrepare::OnCancel() {
}


