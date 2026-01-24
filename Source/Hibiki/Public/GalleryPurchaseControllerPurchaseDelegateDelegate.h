#pragma once
#include "CoreMinimal.h"
#include "HbkGalleryProductInfo.h"
#include "GalleryPurchaseControllerPurchaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGalleryPurchaseControllerPurchaseDelegate, const FHbkGalleryProductInfo&, ProductObject);

