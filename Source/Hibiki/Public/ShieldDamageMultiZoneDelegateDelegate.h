#pragma once
#include "CoreMinimal.h"
#include "ShieldDamageMultiZoneDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShieldDamageMultiZoneDelegate, float, CurrentDurableValue, int32, ZoneIndex);

