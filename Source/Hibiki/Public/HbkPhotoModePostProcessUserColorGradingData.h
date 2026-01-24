#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessUserColorGradingData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessUserColorGradingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorHue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorBrightness;
    
    HIBIKI_API FHbkPhotoModePostProcessUserColorGradingData();
};

