#pragma once
#include "CoreMinimal.h"
#include "MultipleToughTakeDamageDelegateDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMultipleToughTakeDamageDelegate, int32, Index, AActor*, DamageCauser, const UDamageType*, InDamageType);

