#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_GiantRobotAVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotAVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChargeVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChargeBoneName;
    
    HIBIKI_API FHbkGimmick_GiantRobotAVfx();
};

