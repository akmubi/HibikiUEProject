#include "HbkGameFlagFunction.h"

UHbkGameFlagFunction::UHbkGameFlagFunction() {
}

void UHbkGameFlagFunction::SetStageItemFlag(UObject* WorldContextObject, FName FlagName, int32 NewFlag) {
}

void UHbkGameFlagFunction::SetNowStageNumber(UObject* WorldContextObject, int32 NewFlag) {
}

void UHbkGameFlagFunction::SetNowLevelStageNumber(UObject* WorldContextObject) {
}

void UHbkGameFlagFunction::SetInventoryItemFlag(UObject* WorldContextObject, FName FlagName, int32 SetFlag) {
}

void UHbkGameFlagFunction::SetInStageDifficultyChanged(UObject* WorldContextObject, bool NewFlag) {
}

void UHbkGameFlagFunction::SetHideOutFlag(UObject* WorldContextObject, FName FlagName, int32 SetFlag) {
}

void UHbkGameFlagFunction::SetEnteredCentralRoomFlag(UObject* WorldContextObject) {
}

void UHbkGameFlagFunction::SetEnemyTipsTalkFlag(UObject* WorldContextObject, EHbkEnemyTipsTalk EnemyTipsTalkID) {
}

void UHbkGameFlagFunction::SetEnableTutorialSkipFlag(UObject* WorldContextObject, bool NewFlag) {
}

void UHbkGameFlagFunction::SetClearedStageNumber(UObject* WorldContextObject, int32 NewFlag) {
}

void UHbkGameFlagFunction::SetCentralRoomUnlockFirstTimeDirection(UObject* WorldContextObject) {
}

void UHbkGameFlagFunction::SetCentralRoomUnlockAllDirection(UObject* WorldContextObject) {
}

void UHbkGameFlagFunction::SetAllStageClearedFlag(UObject* WorldContextObject, bool NewFlag) {
}

void UHbkGameFlagFunction::SetAfterLoadGotoHideOut(UObject* WorldContextObject, bool NewFlag) {
}

void UHbkGameFlagFunction::PrepareNewGameFlag(UObject* WorldContextObject) {
}

void UHbkGameFlagFunction::PrepareDebugJumpGameFlag(UObject* WorldContextObject, const TArray<FName>& DummyCheckPoints) {
}

FString UHbkGameFlagFunction::MakeInstanceGameFlagName(AActor* InActor) {
    return TEXT("");
}

bool UHbkGameFlagFunction::IsInStageDifficultyChanged(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameFlagFunction::IsFoundAllGraffitiCollect(UObject* WorldContextObject, UHbkGraffitiCollectSettingsDataAsset* SettingsData) {
    return false;
}

bool UHbkGameFlagFunction::IsEnteredCentralRoomFlag(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameFlagFunction::IsEnableTutorialSkipFlag(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameFlagFunction::IsCentralRoomUnlockAllDirection(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameFlagFunction::IsAllStageSpectraRoomClear(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameFlagFunction::IsAllSpectraHubSpectraRoomClear(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameFlagFunction::IsAfterLoadGotoHideOut(UObject* WorldContextObject) {
    return false;
}

int32 UHbkGameFlagFunction::GetStageItemFlag(UObject* WorldContextObject, FName FlagName) {
    return 0;
}

int32 UHbkGameFlagFunction::GetNowStageNumberEx(int32& MainStageNo, int32& SubStageNo, UObject* WorldContextObject) {
    return 0;
}

int32 UHbkGameFlagFunction::GetNowStageNumber(UObject* WorldContextObject) {
    return 0;
}

int32 UHbkGameFlagFunction::GetInventoryItemFlag(UObject* WorldContextObject, FName FlagName) {
    return 0;
}

int32 UHbkGameFlagFunction::GetInHideOutCount(UObject* WorldContextObject, int32 StageNo, bool AfterClear) {
    return 0;
}

int32 UHbkGameFlagFunction::GetHideOutFlag(UObject* WorldContextObject, FName FlagName) {
    return 0;
}

int32 UHbkGameFlagFunction::GetGraffitiCollectCount(UObject* WorldContextObject) {
    return 0;
}

bool UHbkGameFlagFunction::GetEnemyTipsTalkFlag(UObject* WorldContextObject, EHbkEnemyTipsTalk EnemyTipsTalkID) {
    return false;
}

int32 UHbkGameFlagFunction::GetClearedStageNumberEx(int32& MainStageNo, int32& SubStageNo, UObject* WorldContextObject) {
    return 0;
}

int32 UHbkGameFlagFunction::GetClearedStageNumber(UObject* WorldContextObject) {
    return 0;
}

int32 UHbkGameFlagFunction::GetCheckPointFlag(UObject* WorldContextObject, FName FlagName) {
    return 0;
}

int32 UHbkGameFlagFunction::GetBattleGameOverCount(UObject* WorldContextObject) {
    return 0;
}

bool UHbkGameFlagFunction::GetAllStageClearedFlag(UObject* WorldContextObject) {
    return false;
}

void UHbkGameFlagFunction::DumpCheckPointFlag(UObject* WorldContextObject) {
}

void UHbkGameFlagFunction::ClearInstanceGameFlag(UObject* WorldContextObject) {
}

void UHbkGameFlagFunction::ClearInHideOutCount(UObject* WorldContextObject, int32 StageNo, bool StageStart) {
}

void UHbkGameFlagFunction::AddInHideOutCount(UObject* WorldContextObject, int32 StageNo, bool AfterClear) {
}

void UHbkGameFlagFunction::AddBattleGameOverCount(UObject* WorldContextObject) {
}


