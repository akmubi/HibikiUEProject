#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageTriggerDelegateDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDamageTriggerDelegate, float, Damage, const FGameplayTagContainer&, DamageTags, const AActor*, DamageCauser, const UDamageType*, DamageType);

