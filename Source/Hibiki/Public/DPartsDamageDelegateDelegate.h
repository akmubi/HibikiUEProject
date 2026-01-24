#pragma once
#include "CoreMinimal.h"
#include "DPartsDamageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDPartsDamageDelegate, FName, PartName, float, Damage);

