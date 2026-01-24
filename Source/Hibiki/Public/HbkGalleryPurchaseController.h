#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GalleryPurchaseControllerConsumeDelegateDelegate.h"
#include "GalleryPurchaseControllerPaymentDelegateDelegate.h"
#include "GalleryPurchaseControllerPurchaseDelegateDelegate.h"
#include "HbkGalleryPurchaseController.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkGalleryPurchaseController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalleryPurchaseControllerPurchaseDelegate OnPurchase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalleryPurchaseControllerPaymentDelegate OnPayment;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalleryPurchaseControllerConsumeDelegate OnConsume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ProductInfoTable;
    
public:
    UHbkGalleryPurchaseController();

};

