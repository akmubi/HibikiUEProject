#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkProductCategory.h"
#include "HbkProductInfoMap.h"
#include "PurchaseControllerConsumeDelegateDelegate.h"
#include "PurchaseControllerLoadCompleteDelegateDelegate.h"
#include "PurchaseControllerPaymentDelegateDelegate.h"
#include "PurchaseControllerPurchaseDelegateDelegate.h"
#include "StoreMenuEventDelegateDelegate.h"
#include "HbkPurchaseController.generated.h"

class UDataTable;
class UHbkCostumeStoreWidget;
class UHbkStoreMenuSelectWidget;

UCLASS(Blueprintable)
class UHbkPurchaseController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPurchaseControllerPurchaseDelegate OnPurchase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPurchaseControllerPaymentDelegate OnPayment;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPurchaseControllerConsumeDelegate OnConsume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreMenuEventDelegate OnStoreClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreMenuEventDelegate OnCostumeClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPurchaseControllerLoadCompleteDelegate OnloadCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkStoreMenuSelectWidget> StoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkCostumeStoreWidget> CostumeStoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ProductDataTableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ProductCostumeDataTableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ProductDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ProductCostumeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkProductCategory, FHbkProductInfoMap> ProductCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuSelectWidget* StoreWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCostumeStoreWidget* CostumeStoreWidget;
    
public:
    UHbkPurchaseController();

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnStoreClosed();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnCostumeClosed();
    
};

