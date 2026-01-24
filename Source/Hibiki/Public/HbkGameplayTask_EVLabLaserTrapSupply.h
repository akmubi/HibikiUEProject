#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVLabLaserTrap.h"
#include "HbkGameplayTask_EVLabLaserTrapSupply.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabLaserTrapSupply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabLaserTrap Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupplyNextLaserTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipSupply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLaserTrapCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SetupSE;
    
    HIBIKI_API FHbkGameplayTask_EVLabLaserTrapSupply();
};

