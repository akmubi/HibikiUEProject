#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetTAA.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetTAA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenPercentage;
    
    HIBIKI_API FHbkQualityPresetTAA();
};

