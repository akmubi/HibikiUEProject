#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuStickerPageOnItemDeletedDelegateDelegate.generated.h"

class UHbkPhotoMenuPage_StickerWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhotoMenuStickerPageOnItemDeletedDelegate, UHbkPhotoMenuPage_StickerWidget*, Sender, int32, DeleteId);

