#pragma once
#include "CoreMinimal.h"
#include "PlayerTakeLifeTankItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTakeLifeTankItemDelegate, int32, Count);

