#pragma once
#include "CoreMinimal.h"
#include "DamageDebugReserveDamageDelegateDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDamageDebugReserveDamageDelegate, const AActor*, Attacker, const UDamageType*, DamageType);

