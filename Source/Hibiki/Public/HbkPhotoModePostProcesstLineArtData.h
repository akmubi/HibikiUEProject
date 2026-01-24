#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeLineArtFilterType.h"
#include "HbkPhotoModePostProcessOutlineData.h"
#include "HbkPhotoModePostProcesstLineArtData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcesstLineArtData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeLineArtFilterType PresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLineArtColorThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineArtColorThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineArtSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessOutlineData OutlineData;
    
    HIBIKI_API FHbkPhotoModePostProcesstLineArtData();
};

