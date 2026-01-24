#include "HbkSaveGameBlueprintAsyncLoadGame.h"

UHbkSaveGameBlueprintAsyncLoadGame::UHbkSaveGameBlueprintAsyncLoadGame() {
    this->WorldContextObject = NULL;
}

UHbkSaveGameBlueprintAsyncLoadGame* UHbkSaveGameBlueprintAsyncLoadGame::RequestLoadMostRecentGame(UObject* NewWorldContextObject, bool bDisconnectIfError) {
    return NULL;
}

UHbkSaveGameBlueprintAsyncLoadGame* UHbkSaveGameBlueprintAsyncLoadGame::RequestLoadGameWithJumpGameSeq(UObject* NewWorldContextObject, const FString& SlotName, const FName& JumpGameSeqName, bool bDisconnectIfError) {
    return NULL;
}

UHbkSaveGameBlueprintAsyncLoadGame* UHbkSaveGameBlueprintAsyncLoadGame::RequestLoadGame(UObject* NewWorldContextObject, const FString& SlotName, bool bDisconnectIfError) {
    return NULL;
}


