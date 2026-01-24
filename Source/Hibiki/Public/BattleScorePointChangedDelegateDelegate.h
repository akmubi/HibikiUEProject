#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkScoreActionType.h"
#include "BattleScorePointChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBattleScorePointChangedDelegate, EHbkScoreActionType, ActionType, FGameplayTagContainer, ActionTags, float, ChangeValue);

