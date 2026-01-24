#pragma once
#include "CoreMinimal.h"
#include "HbkEnginePostProcessVolumeFilmGrainDataPatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnginePostProcessVolumeFilmGrainDataPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilmGrainFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilmGrainIntensityFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilmGrainIntensity;
    
    HIBIKI_API FHbkEnginePostProcessVolumeFilmGrainDataPatch();
};

