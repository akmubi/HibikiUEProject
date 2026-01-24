#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireRecieveDisabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEnemyFireRecieveDisabled, bool, bDisableByDamage);

