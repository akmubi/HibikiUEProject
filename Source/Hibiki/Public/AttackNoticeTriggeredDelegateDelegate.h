#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeTriggeredDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackNoticeTriggeredDelegate, AHbkEnemyCharacter*, EnemyCharacter, float, TriggerHealthRate);

