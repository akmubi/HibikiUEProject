#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyActionImpactWithTagDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyActionImpactWithTagDelegate, int32, ActionType, FGameplayTag, Tag);

