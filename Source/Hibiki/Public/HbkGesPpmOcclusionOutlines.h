#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGesPpmOcclusionOutlines.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesPpmOcclusionOutlines {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideOcclusionOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOcclusionOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FColor OcclusionOutlinesColor;
    
    HIBIKI_API FHbkGesPpmOcclusionOutlines();
};

