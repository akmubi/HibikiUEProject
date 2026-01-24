#pragma once
#include "CoreMinimal.h"
#include "HbkJustTimingRankInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkJustTimingRankInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percent;
    
    HIBIKI_API FHbkJustTimingRankInfo();
};

