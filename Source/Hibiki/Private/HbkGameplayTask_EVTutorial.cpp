#include "HbkGameplayTask_EVTutorial.h"

UHbkGameplayTask_EVTutorial::UHbkGameplayTask_EVTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameEnvState = NULL;
}

void UHbkGameplayTask_EVTutorial::OnTutorialResult(EHbkTutorialResultType ResultType) {
}

void UHbkGameplayTask_EVTutorial::OnTutorialEnd() {
}

void UHbkGameplayTask_EVTutorial::DestroyTask() {
}

UHbkGameplayTask_EVTutorial* UHbkGameplayTask_EVTutorial::CreateTutorialEventTask(UObject* WorldContextObject, FName assetDataName, FName tutorialName) {
    return NULL;
}


