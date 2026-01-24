#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeBeginTutorialDelegateDelegate.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackNoticeBeginTutorialDelegate, AHbkEnemyCharacter*, EnemyPawn, AHbkEnemyAIController*, EnemyAI);

