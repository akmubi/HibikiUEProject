#pragma once
#include "CoreMinimal.h"
#include "HbkScreenTransitContext.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkScreenTransitContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FHbkScreenTransitContext();
};

