#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkStrongFlyEm_HeightChangeDamageData.generated.h"

USTRUCT(BlueprintType)
struct FHbkStrongFlyEm_HeightChangeDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FallAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallHeight;
    
    HIBIKI_API FHbkStrongFlyEm_HeightChangeDamageData();
};

