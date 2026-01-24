#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerPassiveEffectType.h"
#include "PlayerPassiveEffectDetailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerPassiveEffectDetailDelegate, EHbkPlayerPassiveEffectType, PassiveEffectType, float, CurrentAmount);

