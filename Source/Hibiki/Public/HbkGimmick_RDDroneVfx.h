#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RDDroneVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AppearVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AppearVfxAttachedBoneName;
    
    HIBIKI_API FHbkGimmick_RDDroneVfx();
};

