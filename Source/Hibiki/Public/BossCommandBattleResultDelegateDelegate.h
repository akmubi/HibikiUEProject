#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleResult.h"
#include "BossCommandBattleResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossCommandBattleResultDelegate, EHbkBossCommandBattleResult, Result);

