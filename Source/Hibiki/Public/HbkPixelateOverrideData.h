#pragma once
#include "CoreMinimal.h"
#include "HbkPixelateOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPixelateOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateWorldRadius;
    
    HIBIKI_API FHbkPixelateOverrideData();
};

