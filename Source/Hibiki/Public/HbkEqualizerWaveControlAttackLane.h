#pragma once
#include "CoreMinimal.h"
#include "HbkEqualizerWaveControlAttackBlock.h"
#include "HbkEqualizerWaveControlAttackLane.generated.h"

USTRUCT(BlueprintType)
struct FHbkEqualizerWaveControlAttackLane {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEqualizerWaveControlAttackBlock> AttackBlock;
    
    HIBIKI_API FHbkEqualizerWaveControlAttackLane();
};

