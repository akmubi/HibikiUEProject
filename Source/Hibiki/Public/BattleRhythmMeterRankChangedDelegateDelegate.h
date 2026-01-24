#pragma once
#include "CoreMinimal.h"
#include "BattleRhythmMeterRankChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBattleRhythmMeterRankChangedDelegate, int32, NewRank, int32, OldRank);

