#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessPixelateData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessPixelateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateScaleOffset;
    
    HIBIKI_API FHbkPhotoModePostProcessPixelateData();
};

