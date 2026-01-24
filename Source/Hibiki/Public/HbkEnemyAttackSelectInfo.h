#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAttackSelectInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnemyAttackSelectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ContinueInhibition;
    
    HIBIKI_API FHbkEnemyAttackSelectInfo();
};

