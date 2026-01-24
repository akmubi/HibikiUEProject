#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModePresetType.h"
#include "HbkPhotoModePostProcessPresetPreviewData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessPresetPreviewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePresetType Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresetBlendRatio;
    
    HIBIKI_API FHbkPhotoModePostProcessPresetPreviewData();
};

