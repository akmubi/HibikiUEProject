#pragma once
#include "CoreMinimal.h"
#include "HbkProductInfo.h"
#include "PurchaseControllerPurchaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPurchaseControllerPurchaseDelegate, const FHbkProductInfo&, ProductObject);

