#pragma once
#include "CoreMinimal.h"
#include "EnemyEndDrainDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyEndDrainDelegate, AHbkEnemyCharacter*, EnemyPawn);

