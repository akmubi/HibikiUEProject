#include "HbkStageSelectController.h"

AHbkStageSelectController::AHbkStageSelectController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageDetailTable = NULL;
    this->SpectraRoomDetailTable = NULL;
    this->StageSelectWidgetClassPtr = NULL;
    this->StageSelectWidget = NULL;
    this->StageCheckpointWidgetClassPtr = NULL;
    this->SpectraHubInfoWidgetClassPtr = NULL;
}

bool AHbkStageSelectController::ShowSpectraHubInfo(UObject* WorldContextObject, FGameplayTag GameRole) {
    return false;
}

bool AHbkStageSelectController::ShowCheckpoint(UObject* WorldContextObject, FGameplayTag GameRole) {
    return false;
}

void AHbkStageSelectController::DecidedStage(int32 StageNo, EHbkDifficultyType SelectDifficulty) {
}

bool AHbkStageSelectController::CloseSpectraHubInfo(UObject* WorldContextObject, FGameplayTag GameRole) {
    return false;
}

bool AHbkStageSelectController::CloseCheckpoint(UObject* WorldContextObject, FGameplayTag GameRole) {
    return false;
}

void AHbkStageSelectController::CancelSelect() {
}


