#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessScanlineData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessScanlineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesFreq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesFreqMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesFreqMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesSizeOffset;
    
    HIBIKI_API FHbkPhotoModePostProcessScanlineData();
};

