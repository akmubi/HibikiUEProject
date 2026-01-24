#pragma once
#include "CoreMinimal.h"
#include "HbkEqualizerWaveControlAttackPatternLane.h"
#include "HbkEqualizerWaveControlAttackPatternWave.generated.h"

USTRUCT(BlueprintType)
struct FHbkEqualizerWaveControlAttackPatternWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEqualizerWaveControlAttackPatternLane> PatternLane;
    
    HIBIKI_API FHbkEqualizerWaveControlAttackPatternWave();
};

