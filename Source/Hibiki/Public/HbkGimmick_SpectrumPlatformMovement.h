#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SpectrumPlatformMovement.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SpectrumPlatformMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectrumScale;
    
    HIBIKI_API FHbkGimmick_SpectrumPlatformMovement();
};

