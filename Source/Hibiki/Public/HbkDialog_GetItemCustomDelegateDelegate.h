#pragma once
#include "CoreMinimal.h"
#include "HbkDialog_GetItemCustomDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkDialog_GetItemCustomDelegate, int32, ButtonNo);

