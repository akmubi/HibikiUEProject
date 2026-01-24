#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmAnimationAction.h"
#include "HbkGimmick_RhythmAnimationActivateExtInt.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmAnimationActivateExtInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmAnimationAction Action;
    
    HIBIKI_API FHbkGimmick_RhythmAnimationActivateExtInt();
};

