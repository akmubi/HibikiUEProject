#pragma once
#include "CoreMinimal.h"
#include "BossCommandBattleBeginDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossCommandBattleBeginDelegate, float, ShrinkedTime);

