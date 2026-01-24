#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuStickerPageDelegateDelegate.generated.h"

class UHbkPhotoMenuPage_StickerWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuStickerPageDelegate, UHbkPhotoMenuPage_StickerWidget*, Sender);

