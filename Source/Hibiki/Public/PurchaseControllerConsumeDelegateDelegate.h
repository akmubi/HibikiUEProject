#pragma once
#include "CoreMinimal.h"
#include "HbkProductInfo.h"
#include "PurchaseControllerConsumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPurchaseControllerConsumeDelegate, const FHbkProductInfo&, ProductObject);

