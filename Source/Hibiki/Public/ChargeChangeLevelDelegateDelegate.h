#pragma once
#include "CoreMinimal.h"
#include "ChargeChangeLevelDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChargeChangeLevelDelegate, int32, ChargeLevel, int32, MaxLevel);

