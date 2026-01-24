#pragma once
#include "CoreMinimal.h"
#include "EHbkScoreActionType.h"
#include "BattleScoreScaleStartDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBattleScoreScaleStartDelegate, EHbkScoreActionType, ActionType, float, ScoreScale, int32, BarCount, float, Duration);

