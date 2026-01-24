#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_RhythmPillarType.h"
#include "HbkGimmick_RhythmPillarAction.h"
#include "HbkGimmick_RhythmPillarPhase.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmPillarPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_RhythmPillarType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmPillarAction> Action;
    
    HIBIKI_API FHbkGimmick_RhythmPillarPhase();
};

