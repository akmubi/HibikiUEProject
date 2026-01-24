#pragma once
#include "CoreMinimal.h"
#include "HbkTakeItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTakeItemDelegate, FName, InventoryTagName);

