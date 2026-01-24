#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkHideOutExtraChallengeRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutExtraChallengeRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Item_1_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    HIBIKI_API FHbkHideOutExtraChallengeRewardInfo();
};

