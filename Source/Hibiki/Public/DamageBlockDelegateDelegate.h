#pragma once
#include "CoreMinimal.h"
#include "DamageBlockDelegateDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDamageBlockDelegate, const AActor*, Blocker, const AActor*, Attacker, const UDamageType*, DamageType);

