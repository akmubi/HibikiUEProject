#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetSSAO.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetSSAO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbientOcclusionLevels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmbientOcclusionMaxQuality;
    
    HIBIKI_API FHbkQualityPresetSSAO();
};

