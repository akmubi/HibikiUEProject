#pragma once
#include "CoreMinimal.h"
#include "EnemyStateParam.h"
#include "EnemyStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FEnemyStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyStateParam AttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyStateParam ActionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyStateParam DamageState;
    
    HIBIKI_API FEnemyStateInfo();
};

