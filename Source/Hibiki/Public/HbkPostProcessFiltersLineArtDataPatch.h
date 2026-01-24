#pragma once
#include "CoreMinimal.h"
#include "HbkPostProcessFiltersLineArtDataPatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersLineArtDataPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineArtFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineArtColorThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutlineBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutlineLumThreshold;
    
    HIBIKI_API FHbkPostProcessFiltersLineArtDataPatch();
};

