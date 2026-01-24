#pragma once
#include "CoreMinimal.h"
#include "HbkShadowVolumePhase.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FHbkShadowVolumePhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideShadowColorLUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ShadowColorLUT;
    
    HIBIKI_API FHbkShadowVolumePhase();
};

