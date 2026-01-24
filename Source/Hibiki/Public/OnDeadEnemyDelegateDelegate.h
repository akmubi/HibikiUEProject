#pragma once
#include "CoreMinimal.h"
#include "OnDeadEnemyDelegateDelegate.generated.h"

class AHbkCharacter;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeadEnemyDelegate, AHbkEnemyCharacter*, EnemyPawn, AHbkCharacter*, CauserPawn);

