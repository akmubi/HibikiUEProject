#pragma once
#include "CoreMinimal.h"
#include "DamageChangedHealthByDamagedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDamageChangedHealthByDamagedDelegate, AActor*, Causer, float, Value, float, PrevValue, float, ValueRate);

