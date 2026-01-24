#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAttackParam.h"
#include "HbkEnemyLastAttackInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemyLastAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyAttackParam AttackParam;
    
    FHbkEnemyLastAttackInfo();
};

