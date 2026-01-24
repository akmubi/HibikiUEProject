#pragma once
#include "CoreMinimal.h"
#include "HbkChallengeMetricsCondition.h"
#include "HbkChallengeMetricsConditions.generated.h"

USTRUCT(BlueprintType)
struct FHbkChallengeMetricsConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkChallengeMetricsCondition> List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoticeListNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NoticeNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteNotice;
    
    HIBIKI_API FHbkChallengeMetricsConditions();
};

