#pragma once
#include "CoreMinimal.h"
#include "BattleScoreRateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBattleScoreRateChangedDelegate, int32, NewRank, float, ScoreRate);

