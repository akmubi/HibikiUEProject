#pragma once
#include "CoreMinimal.h"
#include "EmEndStateDelegateDelegate.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmEndStateDelegate, AHbkEnemyCharacter*, EnemyCharacter, AHbkEnemyAIController*, EnemyAI);

