#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmPillarAction.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmPillarAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveHeigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RhythmHeight;
    
    HIBIKI_API FHbkGimmick_RhythmPillarAction();
};

