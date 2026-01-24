#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerPassiveEffectType.h"
#include "PlayerPassiveEffectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerPassiveEffectDelegate, EHbkPlayerPassiveEffectType, PassiveEffectType);

