#pragma once
#include "CoreMinimal.h"
#include "HbkPostProcessFiltersPixelateDataPatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersPixelateDataPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateScale;
    
    HIBIKI_API FHbkPostProcessFiltersPixelateDataPatch();
};

