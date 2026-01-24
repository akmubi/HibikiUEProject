#pragma once
#include "CoreMinimal.h"
#include "HbkEqualizerWaveControlAttackLane.h"
#include "HbkEqualizerWaveControlAttackWave.generated.h"

USTRUCT(BlueprintType)
struct FHbkEqualizerWaveControlAttackWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEqualizerWaveControlAttackLane> AttackLane;
    
    HIBIKI_API FHbkEqualizerWaveControlAttackWave();
};

