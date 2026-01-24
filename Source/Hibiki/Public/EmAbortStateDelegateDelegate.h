#pragma once
#include "CoreMinimal.h"
#include "EmAbortStateDelegateDelegate.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmAbortStateDelegate, AHbkEnemyCharacter*, EnemyCharacter, AHbkEnemyAIController*, EnemyAI);

