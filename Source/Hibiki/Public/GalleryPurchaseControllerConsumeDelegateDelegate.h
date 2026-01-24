#pragma once
#include "CoreMinimal.h"
#include "HbkGalleryProductInfo.h"
#include "GalleryPurchaseControllerConsumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGalleryPurchaseControllerConsumeDelegate, const FHbkGalleryProductInfo&, ProductObject);

