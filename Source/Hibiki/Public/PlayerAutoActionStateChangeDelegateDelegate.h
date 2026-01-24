#pragma once
#include "CoreMinimal.h"
#include "PlayerAutoActionStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerAutoActionStateChangeDelegate, bool, bEnable);

