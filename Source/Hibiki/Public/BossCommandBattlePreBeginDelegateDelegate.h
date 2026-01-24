#pragma once
#include "CoreMinimal.h"
#include "BossCommandBattlePreBeginDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossCommandBattlePreBeginDelegate, float, NoteTime);

