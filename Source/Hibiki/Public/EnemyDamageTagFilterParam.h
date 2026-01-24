#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyDamageTagFilterParam.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDamageTagFilterParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextFilterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FindFailedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    HIBIKI_API FEnemyDamageTagFilterParam();
};

