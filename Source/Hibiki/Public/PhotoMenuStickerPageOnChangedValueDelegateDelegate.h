#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuStickerPageOnChangedValueDelegateDelegate.generated.h"

class UHbkPhotoMenuPage_StickerWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuStickerPageOnChangedValueDelegate, UHbkPhotoMenuPage_StickerWidget*, Sender);

