#pragma once
#include "CoreMinimal.h"
#include "PurchaseControllerPaymentDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPurchaseControllerPaymentDelegate, int32, Price, int32, Money, int32, Circuit);

