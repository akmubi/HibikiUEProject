#pragma once
#include "CoreMinimal.h"
#include "HbkRankScoreBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkRankScoreBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddScore;
    
    HIBIKI_API FHbkRankScoreBonusInfo();
};

