#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushWaveBattleResultJustTimingPercentData.h"
#include "HbkBPMRushWaveBattleResultScoreData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushWaveBattleResultScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushWaveBattleResultJustTimingPercentData> JustTimingPercentData;
    
    HIBIKI_API FHbkBPMRushWaveBattleResultScoreData();
};

