#pragma once
#include "CoreMinimal.h"
#include "EmBeginOverkillDelegateDelegate.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmBeginOverkillDelegate, AHbkEnemyCharacter*, EnemyPawn, AHbkEnemyAIController*, EnemyAI);

