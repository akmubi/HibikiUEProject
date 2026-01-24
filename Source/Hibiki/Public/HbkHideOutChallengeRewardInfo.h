#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkHideOutChallengeRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutChallengeRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Item_1_Num;
    
    HIBIKI_API FHbkHideOutChallengeRewardInfo();
};

