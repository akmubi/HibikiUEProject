#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_GiantRobotASound.generated.h"

class UAkAudioEvent;
class UAkComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotASound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AimSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SignSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    HIBIKI_API FHbkGimmick_GiantRobotASound();
};

