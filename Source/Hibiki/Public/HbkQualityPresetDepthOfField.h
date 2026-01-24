#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetDepthOfField.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetDepthOfField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepthOfFieldQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DOFRecombineOpt;
    
    HIBIKI_API FHbkQualityPresetDepthOfField();
};

