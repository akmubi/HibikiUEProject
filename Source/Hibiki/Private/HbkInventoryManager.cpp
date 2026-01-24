#include "HbkInventoryManager.h"

UHbkInventoryManager::UHbkInventoryManager() {
    this->DLCItem_DA = NULL;
    this->TrackKeyItemCollection_DT = NULL;
    this->Inventory = NULL;
    this->PurchaseController = NULL;
    this->GalleryPurchaseController = NULL;
    this->PlayerEquipController = NULL;
    this->SkillListController = NULL;
}

void UHbkInventoryManager::SetDebugSpAttack(const TArray<FString>& Args) {
}

void UHbkInventoryManager::ResetCostume() {
}

void UHbkInventoryManager::OpenProductAll() {
}

void UHbkInventoryManager::OpenCostumeAll() {
}

void UHbkInventoryManager::GetSkillAll() {
}

void UHbkInventoryManager::ForceCloseTakeItemUI(float Damage) {
}

void UHbkInventoryManager::EndTakeItemUI(EHbkTakeItemUIType TakeItemType) {
}

void UHbkInventoryManager::Blueprint_UnlockShopMenu(UObject* WorldContextObject, EHbkShopMenuCategory ShopCategory) {
}

void UHbkInventoryManager::Blueprint_GetTrackKeyItemCollectionStats(UObject* WorldContextObject, FHbkTrackItemCollectionStats& OutKeyItemStats, int32 StageNo) {
}

void UHbkInventoryManager::Blueprint_GetSpectraHubKeyItemCollectionStats(UObject* WorldContextObject, FHbkTrackItemCollectionStats& OutKeyItemStats) {
}

UHbkInventoryObject* UHbkInventoryManager::Blueprint_GetInventoryObject(const FGameplayTag& Key) const {
    return NULL;
}


