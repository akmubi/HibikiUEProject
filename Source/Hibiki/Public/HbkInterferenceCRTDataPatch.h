#pragma once
#include "CoreMinimal.h"
#include "HbkInterferenceCRTDataPatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkInterferenceCRTDataPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionScale720p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionScale1080p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionScale1440p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionScale2160p;
    
    HIBIKI_API FHbkInterferenceCRTDataPatch();
};

