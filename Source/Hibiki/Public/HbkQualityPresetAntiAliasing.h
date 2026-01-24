#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetAntiAliasing.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetAntiAliasing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessAAQuality;
    
    HIBIKI_API FHbkQualityPresetAntiAliasing();
};

