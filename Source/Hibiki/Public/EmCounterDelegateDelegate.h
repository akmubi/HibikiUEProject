#pragma once
#include "CoreMinimal.h"
#include "EmCounterDelegateDelegate.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmCounterDelegate, AHbkEnemyCharacter*, EnemyCharacter, AHbkEnemyAIController*, EnemyAI);

