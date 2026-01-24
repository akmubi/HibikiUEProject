#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushDifficultyRhythmGaugeData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushDifficultyRhythmGaugeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadEnemyIncreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedDecreaseRate;
    
    HIBIKI_API FHbkBPMRushDifficultyRhythmGaugeData();
};

