#pragma once
#include "CoreMinimal.h"
#include "ShieldTryDamageBlockDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FShieldTryDamageBlock, AActor*, DamageCauser, const UDamageType*, DamageType, float, DamageValue);

