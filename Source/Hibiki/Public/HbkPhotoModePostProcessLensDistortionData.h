#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessLensDistortionData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessLensDistortionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensDistortionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensDistortionUVScaleB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensDistortionUVScaleP;
    
    HIBIKI_API FHbkPhotoModePostProcessLensDistortionData();
};

