#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVCannonBattleOverrideEnemy.h"
#include "HbkGameplayTask_EVCannonBattleEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVCannonBattleEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGameplayTask_EVCannonBattleOverrideEnemy> OverrideEnemyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntervalNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstRespwanEvent;
    
    HIBIKI_API FHbkGameplayTask_EVCannonBattleEnemyData();
};

