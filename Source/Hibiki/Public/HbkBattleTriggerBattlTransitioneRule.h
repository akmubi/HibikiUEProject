#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerEnemyDieRule.h"
#include "HbkBattleTriggerBattlTransitioneRule.generated.h"

USTRUCT(BlueprintType)
struct FHbkBattleTriggerBattlTransitioneRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleTriggerEnemyDieRule> EnemyDieRules;
    
    HIBIKI_API FHbkBattleTriggerBattlTransitioneRule();
};

