#pragma once
#include "CoreMinimal.h"
#include "EmBeginStateDelegateDelegate.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmBeginStateDelegate, AHbkEnemyCharacter*, EnemyCharacter, AHbkEnemyAIController*, EnemyAI);

