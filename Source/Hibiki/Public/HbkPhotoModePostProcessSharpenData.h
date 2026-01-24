#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessSharpenData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessSharpenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharpenIntensity;
    
    HIBIKI_API FHbkPhotoModePostProcessSharpenData();
};

