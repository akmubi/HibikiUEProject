#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessChromaticAberrationData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessChromaticAberrationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChromaticAberrationIntensity;
    
    HIBIKI_API FHbkPhotoModePostProcessChromaticAberrationData();
};

