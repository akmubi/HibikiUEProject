#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessFilmGrainData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessFilmGrainData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilmGrainIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilmGrainColorIntensity;
    
    HIBIKI_API FHbkPhotoModePostProcessFilmGrainData();
};

