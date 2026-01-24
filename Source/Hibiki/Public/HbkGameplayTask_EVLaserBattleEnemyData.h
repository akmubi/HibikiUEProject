#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVLaserBattleFillingEnemyData.h"
#include "HbkGameplayTask_EVLaserBattleEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLaserBattleEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleFillingEnemyData FillingEnemyDataLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleFillingEnemyData FillingEnemyDataRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEnemiesRemainingWhenAdding;
    
    HIBIKI_API FHbkGameplayTask_EVLaserBattleEnemyData();
};

