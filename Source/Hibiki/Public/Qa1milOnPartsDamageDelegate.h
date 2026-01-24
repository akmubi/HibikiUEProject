#pragma once
#include "CoreMinimal.h"
#include "EHbkEm1000PartsType.h"
#include "Qa1milOnPartsDamageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQa1milOnPartsDamage, EHbkEm1000PartsType, PartsType);

