#include "HbkGameplayTask_BPMRushResult.h"

UHbkGameplayTask_BPMRushResult::UHbkGameplayTask_BPMRushResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BPMRushController = NULL;
    this->SettingsData = NULL;
    this->ResultWidget = NULL;
}

void UHbkGameplayTask_BPMRushResult::ReturnToHideout() {
}

void UHbkGameplayTask_BPMRushResult::Retry() {
}


