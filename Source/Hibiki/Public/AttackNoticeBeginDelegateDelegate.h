#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeBeginDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackNoticeBeginDelegate, AHbkEnemyCharacter*, Attacker);

