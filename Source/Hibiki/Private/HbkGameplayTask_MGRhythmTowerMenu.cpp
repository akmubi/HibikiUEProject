#include "HbkGameplayTask_MGRhythmTowerMenu.h"

UHbkGameplayTask_MGRhythmTowerMenu::UHbkGameplayTask_MGRhythmTowerMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pStartWidget = NULL;
}

UHbkGameplayTask_MGRhythmTowerMenu* UHbkGameplayTask_MGRhythmTowerMenu::RhythmTowerMenuTask(UObject* WorldContextObject, UHbkMGRhythmTower_MenuAsset* pMenuAsset, UDataTable* pSoundDataTable) {
    return NULL;
}

void UHbkGameplayTask_MGRhythmTowerMenu::OnReturnToHideout() {
}

void UHbkGameplayTask_MGRhythmTowerMenu::OnNewGame(bool bHardcoreMode) {
}

void UHbkGameplayTask_MGRhythmTowerMenu::OnFinishedFadeOut() {
}

void UHbkGameplayTask_MGRhythmTowerMenu::OnContinue(bool bHardcoreMode) {
}

void UHbkGameplayTask_MGRhythmTowerMenu::FinishMenuTutorial() {
}


