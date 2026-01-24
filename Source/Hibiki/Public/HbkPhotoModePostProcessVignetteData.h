#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessVignetteData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessVignetteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteSize;
    
    HIBIKI_API FHbkPhotoModePostProcessVignetteData();
};

