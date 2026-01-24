#pragma once
#include "CoreMinimal.h"
#include "HbkEnginePostProcessVolumeFilmGrainDataPatch.h"
#include "HbkEnginePostProcessVolumeLensFilterDataPatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnginePostProcessVolumeLensFilterDataPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilmGrainEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnginePostProcessVolumeFilmGrainDataPatch FilmGrain;
    
    HIBIKI_API FHbkEnginePostProcessVolumeLensFilterDataPatch();
};

