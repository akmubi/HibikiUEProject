#pragma once
#include "CoreMinimal.h"
#include "OnDeleteStickerParentDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteStickerParentDelegate, int32, DeleteId);

