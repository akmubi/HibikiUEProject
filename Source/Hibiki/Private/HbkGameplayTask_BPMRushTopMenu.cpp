#include "HbkGameplayTask_BPMRushTopMenu.h"

UHbkGameplayTask_BPMRushTopMenu::UHbkGameplayTask_BPMRushTopMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BPMRushController = NULL;
    this->SettingsData = NULL;
    this->StartWidget = NULL;
    this->ScreenTransitionTask = NULL;
}

void UHbkGameplayTask_BPMRushTopMenu::ScreenTransitionFinished() {
}

void UHbkGameplayTask_BPMRushTopMenu::ReturnToHideout() {
}

void UHbkGameplayTask_BPMRushTopMenu::NewGame(bool bHardcoreMode) {
}


