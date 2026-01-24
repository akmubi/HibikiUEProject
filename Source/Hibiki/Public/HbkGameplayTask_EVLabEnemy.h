#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGameplayTask_EVLabEnemy.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnemyTypeID;
    
    HIBIKI_API FHbkGameplayTask_EVLabEnemy();
};

