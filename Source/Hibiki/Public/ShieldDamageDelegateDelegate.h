#pragma once
#include "CoreMinimal.h"
#include "ShieldDamageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShieldDamageDelegate, float, CurrentDurableValue);

