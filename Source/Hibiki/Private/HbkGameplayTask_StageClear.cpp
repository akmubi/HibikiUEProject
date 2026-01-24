#include "HbkGameplayTask_StageClear.h"
#include "Templates/SubclassOf.h"

UHbkGameplayTask_StageClear::UHbkGameplayTask_StageClear() {
    this->ClearWidget = NULL;
}

UHbkGameplayTask_StageClear* UHbkGameplayTask_StageClear::StageClearAndLevelMove(UObject* WorldContextObject, TSubclassOf<UHbkClearWidget> ClearWidgetClass) {
    return NULL;
}

UHbkGameplayTask_StageClear* UHbkGameplayTask_StageClear::StageClear(UObject* WorldContextObject, FName SaveSpotName) {
    return NULL;
}

void UHbkGameplayTask_StageClear::Receive_ResultShowClear() {
}

void UHbkGameplayTask_StageClear::Receive_ResultEnded() {
}

UHbkGameplayTask_StageClear* UHbkGameplayTask_StageClear::LevelMoveAfterStageClear(UObject* WorldContextObject) {
    return NULL;
}


