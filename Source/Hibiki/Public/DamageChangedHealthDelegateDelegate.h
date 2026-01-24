#pragma once
#include "CoreMinimal.h"
#include "DamageChangedHealthDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDamageChangedHealthDelegate, float, Value, float, PrevValue, float, ValueRate);

