#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BPMRushSpectrumMovement.h"
#include "HbkGimmick_BPMRushSpectrumMovementExtInt.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BPMRushSpectrumMovementExtInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BPMRushSpectrumMovement Movement;
    
    HIBIKI_API FHbkGimmick_BPMRushSpectrumMovementExtInt();
};

