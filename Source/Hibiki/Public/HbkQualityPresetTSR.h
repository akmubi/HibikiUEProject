#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetTSR.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetTSR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TemporalAAAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessAAQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenPercentage;
    
    HIBIKI_API FHbkQualityPresetTSR();
};

