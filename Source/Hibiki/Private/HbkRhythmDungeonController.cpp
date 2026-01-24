#include "HbkRhythmDungeonController.h"

UHbkRhythmDungeonController::UHbkRhythmDungeonController() {
    this->StringTable = NULL;
    this->StartWidgetClass = NULL;
    this->PopupWidgetClass = NULL;
    this->BattleWidgetClass = NULL;
    this->StoreWidgetClass = NULL;
    this->ResultWidgetClass = NULL;
    this->GameOverWidgetClass = NULL;
    this->StatusWidgetClass = NULL;
    this->CleanRobotClass = NULL;
    this->VendingMachineClass = NULL;
    this->TreasureChestClass = NULL;
    this->KaleStatueClass = NULL;
    this->LaserPodClass = NULL;
    this->RhythmDungeonDataAsset = NULL;
    this->pRhythmDungeonTask = NULL;
}

void UHbkRhythmDungeonController::RemoveGrowthParam(EHbkPlayerRDGrowthType GrowthType, int32 RemoveLevel) {
}

bool UHbkRhythmDungeonController::IsChallenge() {
    return false;
}

bool UHbkRhythmDungeonController::GetSelectedChallenge() {
    return false;
}

UHbkGameplayTask_MGRhythmDungeon* UHbkRhythmDungeonController::GetRhythmDungeonTask() {
    return NULL;
}

void UHbkRhythmDungeonController::EquipSpecialAttack(const FGameplayTag SPATag) {
}

UHbkGameplayTask_MGRhythmDungeon* UHbkRhythmDungeonController::Blueprint_GetRhythmDungeonTask(UObject* WorldContextObject) {
    return NULL;
}

UHbkRhythmDungeonChallengeController* UHbkRhythmDungeonController::Blueprint_GetRhythmDungeonChallengeController(UObject* WorldContextObject) {
    return NULL;
}

void UHbkRhythmDungeonController::AddGrowthParam(EHbkPlayerRDGrowthType GrowthType, int32 AddLevel) {
}


