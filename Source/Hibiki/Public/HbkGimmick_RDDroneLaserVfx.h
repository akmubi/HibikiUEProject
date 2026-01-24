#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RDDroneLaserVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneLaserVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaserVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaserVfxBeamEmitterIndex;
    
    HIBIKI_API FHbkGimmick_RDDroneLaserVfx();
};

