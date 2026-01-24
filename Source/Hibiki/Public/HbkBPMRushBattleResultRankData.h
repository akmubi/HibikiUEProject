#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushBattleResultRankData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushBattleResultRankData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdRankS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdRankA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdRankB;
    
    HIBIKI_API FHbkBPMRushBattleResultRankData();
};

