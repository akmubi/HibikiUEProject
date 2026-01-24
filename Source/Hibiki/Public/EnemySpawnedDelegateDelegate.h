#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnedDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnedDelegate, AHbkEnemyCharacter*, SpawnEnemy);

