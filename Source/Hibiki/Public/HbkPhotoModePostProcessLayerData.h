#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeColorFilterType.h"
#include "EHbkPhotoModeLineArtFilterType.h"
#include "EHbkPhotoModePostProcessLayerType.h"
#include "HbkPhotoModePostProcessColorFilterData.h"
#include "HbkPhotoModePostProcessPixelateData.h"
#include "HbkPhotoModePostProcessScanlineData.h"
#include "HbkPhotoModePostProcessUserColorGradingData.h"
#include "HbkPhotoModePostProcesstLineArtData.h"
#include "HbkPhotoModePostProcessLayerData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePostProcessLayerType PreviewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineArtFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeLineArtFilterType ActiveLineArtFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeColorFilterType ActiveColorFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessUserColorGradingData UserColorGrading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Exposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPixelateData Pixelate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelateFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessScanlineData Scanline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanlineFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessColorFilterData ActivePreviewColorFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcesstLineArtData ActivePreviewLineArtData;
    
    HIBIKI_API FHbkPhotoModePostProcessLayerData();
};

