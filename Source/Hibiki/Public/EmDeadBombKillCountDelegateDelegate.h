#pragma once
#include "CoreMinimal.h"
#include "EmDeadBombKillCountDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmDeadBombKillCountDelegate, int32, KillCount, AHbkEnemyCharacter*, CauserEnemy);

