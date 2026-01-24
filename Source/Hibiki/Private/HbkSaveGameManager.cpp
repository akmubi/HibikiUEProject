#include "HbkSaveGameManager.h"

UHbkSaveGameManager::UHbkSaveGameManager() {
    this->CachedSaveGameDataGlobal = NULL;
    this->CachedSaveGameDataStageProgress = NULL;
    this->CachedSaveGameDataStageCheckpoint = NULL;
    this->Indicator = NULL;
    this->StaticThumbnailTexturePtr = NULL;
    this->ThumbnailRenderTarget = NULL;
    this->XboxSandboxName = TEXT("WJPTRC");
    this->StageInfoDataTable = NULL;
}

void UHbkSaveGameManager::SetCurrentSlotNameByIndex(int32 SlotIndex) {
}

void UHbkSaveGameManager::SetCurrentSlotName(const FString& SlotName) {
}

void UHbkSaveGameManager::OnActorPreEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndReason) {
}

FString UHbkSaveGameManager::MakeSaveSlotNameFromUnused() const {
    return TEXT("");
}

FString UHbkSaveGameManager::MakeSaveSlotNameFromIndex(int32 SlotIndex) {
    return TEXT("");
}

void UHbkSaveGameManager::K2_GetCachedDetails(TArray<UHbkSaveGameDetail*>& Details) const {
}

bool UHbkSaveGameManager::IsWorkingJob() const {
    return false;
}

bool UHbkSaveGameManager::HasUnusedSlots() const {
    return false;
}

bool UHbkSaveGameManager::HasCachedDetails() const {
    return false;
}

FString UHbkSaveGameManager::GetCurrentSlotName() const {
    return TEXT("");
}

UHbkSaveGameDetail* UHbkSaveGameManager::FindCachedDetail(const FString& SlotName) const {
    return NULL;
}

UHbkSaveGameDetail* UHbkSaveGameManager::FindCachedCurrentSlotDetail() const {
    return NULL;
}

void UHbkSaveGameManager::ClearCurrentSlotName() {
}


