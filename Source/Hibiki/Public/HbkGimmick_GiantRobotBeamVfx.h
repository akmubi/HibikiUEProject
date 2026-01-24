#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_GiantRobotBeamVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotBeamVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BeamVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactivate;
    
    HIBIKI_API FHbkGimmick_GiantRobotBeamVfx();
};

