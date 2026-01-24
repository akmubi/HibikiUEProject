#pragma once
#include "CoreMinimal.h"
#include "HbkBattleResultScoreDetail.generated.h"

USTRUCT(BlueprintType)
struct FHbkBattleResultScoreDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionScore;
    
    HIBIKI_API FHbkBattleResultScoreDetail();
};

