#pragma once
#include "CoreMinimal.h"
#include "PlayerTakeGrowthItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTakeGrowthItemDelegate, int32, Count);

