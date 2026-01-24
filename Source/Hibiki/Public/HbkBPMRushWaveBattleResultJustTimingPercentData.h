#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushWaveBattleResultJustTimingPercentData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushWaveBattleResultJustTimingPercentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JustTimingPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddScore;
    
    HIBIKI_API FHbkBPMRushWaveBattleResultJustTimingPercentData();
};

