#pragma once
#include "CoreMinimal.h"
#include "AHbkGimmick_ARProjectorVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FAHbkGimmick_ARProjectorVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AlwaysVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SweatVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MacaronHitVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DyingVfx;
    
    HIBIKI_API FAHbkGimmick_ARProjectorVfx();
};

