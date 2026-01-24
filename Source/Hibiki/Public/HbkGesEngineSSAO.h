#pragma once
#include "CoreMinimal.h"
#include "HbkGesEngineSSAO.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesEngineSSAO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideAmbientOcclusionIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AmbientOcclusionIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideAmbientOcclusionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AmbientOcclusionRadius;
    
    HIBIKI_API FHbkGesEngineSSAO();
};

