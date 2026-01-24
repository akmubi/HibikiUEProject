#pragma once
#include "CoreMinimal.h"
#include "MiniGameInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMiniGameInputDelegate, bool, bSuccess, int32, InputCount, int32, MaxCount);

