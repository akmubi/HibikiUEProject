#pragma once
#include "CoreMinimal.h"
#include "GameRuleCreatedRhythmDungeonDelegateDelegate.generated.h"

class UHbkRhythmDungeonController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameRuleCreatedRhythmDungeonDelegate, UHbkRhythmDungeonController*, RhythmDungeonController);

