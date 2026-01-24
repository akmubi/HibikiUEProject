#pragma once
#include "CoreMinimal.h"
#include "ToughTakeDamageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FToughTakeDamageDelegate, float, PreToughValue, float, DamagedToughValue);

