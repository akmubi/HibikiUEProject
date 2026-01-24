#pragma once
#include "CoreMinimal.h"
#include "BattleStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBattleStateChangeDelegate, int32, StateIndex);

