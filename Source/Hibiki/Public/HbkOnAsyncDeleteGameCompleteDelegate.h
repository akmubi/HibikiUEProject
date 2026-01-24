#pragma once
#include "CoreMinimal.h"
#include "HbkOnAsyncDeleteGameCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkOnAsyncDeleteGameComplete, bool, bSuccess);

