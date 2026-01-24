#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmLaserMovement.h"
#include "HbkGimmick_RhythmLaserMovementPattern.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmLaserMovementPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmLaserMovement> Movement;
    
    HIBIKI_API FHbkGimmick_RhythmLaserMovementPattern();
};

