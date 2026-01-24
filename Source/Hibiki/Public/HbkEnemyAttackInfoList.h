#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAttackInfo.h"
#include "HbkEnemyAttackInfoList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemyAttackInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAttackInfo> AttackInfoList;
    
    FHbkEnemyAttackInfoList();
};

