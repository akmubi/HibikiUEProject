#pragma once
#include "CoreMinimal.h"
#include "EHbkLensFlareGhostBlendMode.h"
#include "HbkLensFlareGhost.h"
#include "HbkLensFlareOcclusionQuad.h"
#include "HbkPostProcessLensFlareData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPostProcessLensFlareData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLensFlareOcclusionQuad OcclusionQuad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkLensFlareGhostBlendMode BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensFlareAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensFlareIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensFlareScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenCenterOffsetU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenCenterOffsetV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkLensFlareGhost> LensFlareGhosts;
    
    FHbkPostProcessLensFlareData();
};

