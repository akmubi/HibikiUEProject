#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModePostProcessGlobalLayerType.h"
#include "EHbkPhotoModePostProcessLayerType.h"
#include "EHbkPhotoModePresetType.h"
#include "HbkPhotoModePostProcessPresetData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePresetType PresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePostProcessLayerType BackgroundLayerPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePostProcessLayerType ForegroundLayerPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePostProcessGlobalLayerType GlobalLayerPreset;
    
    HIBIKI_API FHbkPhotoModePostProcessPresetData();
};

