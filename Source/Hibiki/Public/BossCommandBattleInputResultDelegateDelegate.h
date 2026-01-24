#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleResult.h"
#include "BossCommandBattleInputResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBossCommandBattleInputResultDelegate, int32, Index, EHbkBossCommandBattleResult, Result, bool, IsJust);

