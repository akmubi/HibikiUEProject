#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetMotionBlur.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetMotionBlur {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraMotionBlurQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMotionBlurNumSampleScale;
    
    HIBIKI_API FHbkQualityPresetMotionBlur();
};

