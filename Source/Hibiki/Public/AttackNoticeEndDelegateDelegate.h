#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeEndDelegateDelegate.generated.h"

class AHbkEnemyCharacter;
class UAnimSequenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttackNoticeEndDelegate, AHbkEnemyCharacter*, Attacker, bool, IsParrySuccessful, UAnimSequenceBase*, PlayerAction);

