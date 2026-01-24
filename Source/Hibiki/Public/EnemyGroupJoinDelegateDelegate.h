#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupJoinDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyGroupJoinDelegate, AHbkEnemyCharacter*, SpawnEnemy);

