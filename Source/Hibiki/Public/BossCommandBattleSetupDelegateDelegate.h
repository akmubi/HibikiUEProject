#pragma once
#include "CoreMinimal.h"
#include "HbkBossCommandBattleCommand.h"
#include "BossCommandBattleSetupDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossCommandBattleSetupDelegate, const TArray<FHbkBossCommandBattleCommand>&, BattleCommandList);

