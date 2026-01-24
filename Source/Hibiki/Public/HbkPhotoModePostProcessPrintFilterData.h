#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModePrintFilterType.h"
#include "HbkPhotoModePostProcessPrintFilterHalftoneData.h"
#include "HbkPhotoModePostProcessPrintFilterLinesData.h"
#include "HbkPhotoModePostProcessPrintFilterData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessPrintFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePrintFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalftoneLinesLumThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHalftone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalftoneSizeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPrintFilterHalftoneData HalftoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinesSizeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPrintFilterLinesData LinesData;
    
    HIBIKI_API FHbkPhotoModePostProcessPrintFilterData();
};

