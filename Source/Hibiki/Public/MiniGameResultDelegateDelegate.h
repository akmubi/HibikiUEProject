#pragma once
#include "CoreMinimal.h"
#include "MiniGameResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMiniGameResultDelegate, int32, SuccessCount, int32, MaxCount);

