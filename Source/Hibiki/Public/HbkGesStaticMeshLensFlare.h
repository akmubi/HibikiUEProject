#pragma once
#include "CoreMinimal.h"
#include "HbkGesStaticMeshLensFlare.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesStaticMeshLensFlare {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideStaticMeshLensFlareGlobalIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StaticMeshLensFlareGlobalIntensity;
    
    HIBIKI_API FHbkGesStaticMeshLensFlare();
};

