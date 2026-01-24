#pragma once
#include "CoreMinimal.h"
#include "HbkEqualizerWaveControlAttackPatternLane.generated.h"

USTRUCT(BlueprintType)
struct FHbkEqualizerWaveControlAttackPatternLane {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bIsAttackGrids;
    
    HIBIKI_API FHbkEqualizerWaveControlAttackPatternLane();
};

