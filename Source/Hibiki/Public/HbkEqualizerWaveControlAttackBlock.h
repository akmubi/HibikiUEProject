#pragma once
#include "CoreMinimal.h"
#include "HbkEqualizerWaveControlAttackBlock.generated.h"

class UHbkImproveAttackComponent;

USTRUCT(BlueprintType)
struct FHbkEqualizerWaveControlAttackBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* AttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepthIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidthIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidthCount;
    
    HIBIKI_API FHbkEqualizerWaveControlAttackBlock();
};

