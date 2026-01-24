#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVCannonBattleOverrideEnemy.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVCannonBattleOverrideEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RespawnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyGroupName;
    
    HIBIKI_API FHbkGameplayTask_EVCannonBattleOverrideEnemy();
};

