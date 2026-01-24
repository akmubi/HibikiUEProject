#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeColorGradingFilterType.h"
#include "EHbkPhotoModeOverlayFilterType.h"
#include "EHbkPhotoModePostProcessGlobalLayerType.h"
#include "EHbkPhotoModePrintFilterType.h"
#include "HbkPhotoModePostProcessColorGradingData.h"
#include "HbkPhotoModePostProcessLensFilterData.h"
#include "HbkPhotoModePostProcessOverlayFilterData.h"
#include "HbkPhotoModePostProcessPrintFilterData.h"
#include "HbkPhotoModePostProcessGlobalLayerData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessGlobalLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePostProcessGlobalLayerType PreviewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessLensFilterData LensFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverlayFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeOverlayFilterType ActiveOverlayFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlayFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeColorGradingFilterType ActiveColorGradingFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePrintFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePrintFilterType ActivePrintFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrintFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessOverlayFilterData ActivePreviewOverlayFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPrintFilterData ActivePrintFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessColorGradingData ActiveColorGradingData;
    
    HIBIKI_API FHbkPhotoModePostProcessGlobalLayerData();
};

