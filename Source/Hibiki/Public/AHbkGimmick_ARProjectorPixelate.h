#pragma once
#include "CoreMinimal.h"
#include "EHbkPixelateState.h"
#include "AHbkGimmick_ARProjectorPixelate.generated.h"

USTRUCT(BlueprintType)
struct FAHbkGimmick_ARProjectorPixelate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPixelateState State;
    
    HIBIKI_API FAHbkGimmick_ARProjectorPixelate();
};

