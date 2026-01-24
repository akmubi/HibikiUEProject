#include "HbkSaveGameBlueprintAsyncSaveGame.h"

UHbkSaveGameBlueprintAsyncSaveGame::UHbkSaveGameBlueprintAsyncSaveGame() {
    this->WorldContextObject = NULL;
}

UHbkSaveGameBlueprintAsyncSaveGame* UHbkSaveGameBlueprintAsyncSaveGame::RequestSaveGame(UObject* NewWorldContextObject, const FString& SlotName, APlayerStart* OverrideSpawnSpot) {
    return NULL;
}

UHbkSaveGameBlueprintAsyncSaveGame* UHbkSaveGameBlueprintAsyncSaveGame::RequestAutoSaveGameOnTransferStageDatas(UObject* NewWorldContextObject, const FString& LevelName, const FString& SpawnSpotName) {
    return NULL;
}

UHbkSaveGameBlueprintAsyncSaveGame* UHbkSaveGameBlueprintAsyncSaveGame::RequestAutoSaveGameOnStageClear(UObject* NewWorldContextObject, const FString& NextLevelName, const FString& NextSpawnSpotName) {
    return NULL;
}

UHbkSaveGameBlueprintAsyncSaveGame* UHbkSaveGameBlueprintAsyncSaveGame::RequestAutoSaveGameOnHideOut(UObject* NewWorldContextObject) {
    return NULL;
}

UHbkSaveGameBlueprintAsyncSaveGame* UHbkSaveGameBlueprintAsyncSaveGame::RequestAutoSaveGameOnDeath(UObject* NewWorldContextObject) {
    return NULL;
}

UHbkSaveGameBlueprintAsyncSaveGame* UHbkSaveGameBlueprintAsyncSaveGame::RequestAutoSaveGame(UObject* NewWorldContextObject, APlayerStart* OverrideSpawnSpot) {
    return NULL;
}


