#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeItemUIType.h"
#include "ItemPopupUIEndDelegeteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemPopupUIEndDelegete, EHbkTakeItemUIType, TakeItemType);

