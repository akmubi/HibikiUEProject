#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnedListDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnedListDelegate, TArray<AHbkEnemyCharacter*>, SpawnEnemies);

