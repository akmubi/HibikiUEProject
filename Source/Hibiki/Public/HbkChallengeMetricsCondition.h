#pragma once
#include "CoreMinimal.h"
#include "EHbkChallengeCompOperator.h"
#include "EHbkChallengeMetricsType.h"
#include "HbkChallengeMetricsCondition.generated.h"

USTRUCT(BlueprintType)
struct FHbkChallengeMetricsCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkChallengeMetricsType MetricsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkChallengeCompOperator CompOperator;
    
    HIBIKI_API FHbkChallengeMetricsCondition();
};

