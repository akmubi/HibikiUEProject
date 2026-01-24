#pragma once
#include "CoreMinimal.h"
#include "EnemyAttackInitiationDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAttackInitiationDelegate, const AHbkEnemyCharacter*, Attacker);

