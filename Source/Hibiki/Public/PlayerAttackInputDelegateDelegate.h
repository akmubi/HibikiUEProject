#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAttackType.h"
#include "PlayerAttackInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPlayerAttackInputDelegate, int32, ComboCount, EHbkPlayerAttackType, Variation, bool, bJustTiming, bool, bActiveTransit, float, ComboActiveTime);

