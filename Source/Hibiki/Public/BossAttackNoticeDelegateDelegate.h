#pragma once
#include "CoreMinimal.h"
#include "BossRhythmAttackParam.h"
#include "BossAttackNoticeDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBossAttackNoticeDelegate, AHbkEnemyCharacter*, Attacker, FBossRhythmAttackParam, IsParrySuccessful);

