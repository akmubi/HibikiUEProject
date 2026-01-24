#pragma once
#include "CoreMinimal.h"
#include "HbkLensFlareOcclusionQuad.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLensFlareOcclusionQuad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseScreenSpaceOcclusionQuad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionQuadSizeScreenSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionQuadAspectRatioScreenSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionQuadSizeWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionQuadAspectRatioWorldSpace;
    
    FHbkLensFlareOcclusionQuad();
};

