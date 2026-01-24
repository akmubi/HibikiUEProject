#pragma once
#include "CoreMinimal.h"
#include "BattleComboCountUpDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBattleComboCountUpDelegate, int32, ComboCount, bool, bScoreBonus);

