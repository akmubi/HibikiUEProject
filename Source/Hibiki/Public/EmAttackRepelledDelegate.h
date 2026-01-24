#pragma once
#include "CoreMinimal.h"
#include "EmAttackRepelledDelegate.generated.h"

class AHbkCharacter;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmAttackRepelled, AHbkEnemyCharacter*, EnemyPawn, const AHbkCharacter*, CauserPawn);

