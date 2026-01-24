#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmMeterActionType.h"
#include "BattleRhythmMeterChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBattleRhythmMeterChangedDelegate, EHbkRhythmMeterActionType, ActionType, float, ChangeValue);

