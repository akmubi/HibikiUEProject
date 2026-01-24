#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetFoliage.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetFoliage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FoliageQuality;
    
    HIBIKI_API FHbkQualityPresetFoliage();
};

