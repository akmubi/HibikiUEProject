#pragma once
#include "CoreMinimal.h"
#include "KaleStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKaleStateChangeDelegate, int32, CurrentPhase);

