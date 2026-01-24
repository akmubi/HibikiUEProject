#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetDynamicShadowMaps.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetDynamicShadowMaps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShadowQuality;
    
    HIBIKI_API FHbkQualityPresetDynamicShadowMaps();
};

