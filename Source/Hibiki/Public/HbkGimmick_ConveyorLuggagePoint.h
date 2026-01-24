#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ConveyorLuggagePoint.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ConveyorLuggagePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    HIBIKI_API FHbkGimmick_ConveyorLuggagePoint();
};

