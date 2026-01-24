#pragma once
#include "CoreMinimal.h"
#include "HbkOnAsyncSaveGameCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkOnAsyncSaveGameComplete, bool, bSuccess);

