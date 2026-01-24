#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_VolcaneBombVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneBombVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SignVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignVfxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BombGroundVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BombMagmaVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombVfxScale;
    
    HIBIKI_API FHbkGimmick_VolcaneBombVfx();
};

