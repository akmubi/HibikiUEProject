#pragma once
#include "CoreMinimal.h"
#include "HbkPostProcessFiltersPrintFilterHalftoneDataPatch.h"
#include "HbkPostProcessFiltersPrintFilterLinesDataPatch.h"
#include "HbkPostProcessFiltersPrintFilterDataPatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersPrintFilterDataPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrintFilterBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalftoneLinesLumThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHalftone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessFiltersPrintFilterHalftoneDataPatch HalftoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessFiltersPrintFilterLinesDataPatch LinesData;
    
    HIBIKI_API FHbkPostProcessFiltersPrintFilterDataPatch();
};

