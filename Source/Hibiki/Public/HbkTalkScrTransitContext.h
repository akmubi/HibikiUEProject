#pragma once
#include "CoreMinimal.h"
#include "HbkTalkScrTransitContext.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkScrTransitContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FHbkTalkScrTransitContext();
};

