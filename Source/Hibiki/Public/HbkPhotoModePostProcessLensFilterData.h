#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessChromaticAberrationData.h"
#include "HbkPhotoModePostProcessFilmGrainData.h"
#include "HbkPhotoModePostProcessLensDistortionData.h"
#include "HbkPhotoModePostProcessSharpenData.h"
#include "HbkPhotoModePostProcessVignetteData.h"
#include "HbkPhotoModePostProcessLensFilterData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessLensFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessSharpenData Sharpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessChromaticAberrationData ChromaticAberration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessVignetteData Vignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessFilmGrainData FilmGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessLensDistortionData LensDistortion;
    
    HIBIKI_API FHbkPhotoModePostProcessLensFilterData();
};

