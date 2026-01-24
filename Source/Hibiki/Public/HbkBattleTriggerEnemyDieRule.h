#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerEnemyDieRule.generated.h"

USTRUCT(BlueprintType)
struct FHbkBattleTriggerEnemyDieRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingNumEnemy;
    
    HIBIKI_API FHbkBattleTriggerEnemyDieRule();
};

