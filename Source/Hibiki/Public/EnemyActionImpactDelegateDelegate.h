#pragma once
#include "CoreMinimal.h"
#include "EnemyActionImpactDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyActionImpactDelegate, int32, ActionType);

