#pragma once
#include "CoreMinimal.h"
#include "HbkPostProcessFiltersScanlineDataPatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersScanlineDataPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanlineFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesFreq720p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesFreq1080p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesFreq1440p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesFreq2160p;
    
    HIBIKI_API FHbkPostProcessFiltersScanlineDataPatch();
};

