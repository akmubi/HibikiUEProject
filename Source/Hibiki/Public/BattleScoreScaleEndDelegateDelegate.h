#pragma once
#include "CoreMinimal.h"
#include "EHbkScoreActionType.h"
#include "BattleScoreScaleEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBattleScoreScaleEndDelegate, EHbkScoreActionType, ActionType);

