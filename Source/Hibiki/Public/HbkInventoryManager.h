#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkShopMenuCategory.h"
#include "EHbkTakeItemUIType.h"
#include "HbkTrackItemCollectionStats.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkInventoryManager.generated.h"

class UDataTable;
class UHbkDLCItemDataAsset;
class UHbkGalleryPurchaseController;
class UHbkInventoryDataAsset;
class UHbkInventoryObject;
class UHbkItemGetPopupBaseWidget;
class UHbkPlayerEquipController;
class UHbkPurchaseController;
class UHbkSkillListController;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryManager : public UTngGameSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkInventoryDataAsset> InventoryDataAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkPurchaseController> PurchaseControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkGalleryPurchaseController> GalleryPurchaseControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkPlayerEquipController> PlayerEquipControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkSkillListController> SkillListControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkTakeItemUIType, TSubclassOf<UHbkItemGetPopupBaseWidget>> ItemGetPopupWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkDLCItemDataAsset* DLCItem_DA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CircuitItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TicketItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FlagItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TrackKeyItemCollection_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkInventoryDataAsset* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPurchaseController* PurchaseController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGalleryPurchaseController* GalleryPurchaseController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerEquipController* PlayerEquipController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSkillListController* SkillListController;
    
public:
    UHbkInventoryManager();

protected:
    UFUNCTION(BlueprintCallable)
    void SetDebugSpAttack(const TArray<FString>& Args);
    
    UFUNCTION(BlueprintCallable)
    void ResetCostume();
    
    UFUNCTION(BlueprintCallable)
    void OpenProductAll();
    
    UFUNCTION(BlueprintCallable)
    void OpenCostumeAll();
    
    UFUNCTION(BlueprintCallable)
    void GetSkillAll();
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseTakeItemUI(float Damage);
    
    UFUNCTION(BlueprintCallable)
    void EndTakeItemUI(EHbkTakeItemUIType TakeItemType);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_UnlockShopMenu(UObject* WorldContextObject, EHbkShopMenuCategory ShopCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_GetTrackKeyItemCollectionStats(UObject* WorldContextObject, FHbkTrackItemCollectionStats& OutKeyItemStats, int32 StageNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_GetSpectraHubKeyItemCollectionStats(UObject* WorldContextObject, FHbkTrackItemCollectionStats& OutKeyItemStats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkInventoryObject* Blueprint_GetInventoryObject(const FGameplayTag& Key) const;
    
};

