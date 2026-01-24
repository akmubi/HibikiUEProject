#pragma once
#include "CoreMinimal.h"
#include "GalleryPurchaseControllerPaymentDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGalleryPurchaseControllerPaymentDelegate, int32, Price, int32, TicketNum);

