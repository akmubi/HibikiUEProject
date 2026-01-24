#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBossGiveDamageRateWithTag.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossGiveDamageRateWithTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> RateWithTag;
    
    HIBIKI_API FHbkBossGiveDamageRateWithTag();
};

