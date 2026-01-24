#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAttackType.h"
#include "PlayerMashInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerMashInputDelegate, int32, MashCount, EHbkPlayerAttackType, Variation);

