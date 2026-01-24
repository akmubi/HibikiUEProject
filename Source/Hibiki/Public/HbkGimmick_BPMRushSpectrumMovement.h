#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BPMRushSpectrumMovement.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BPMRushSpectrumMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectrumScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatCount;
    
    HIBIKI_API FHbkGimmick_BPMRushSpectrumMovement();
};

