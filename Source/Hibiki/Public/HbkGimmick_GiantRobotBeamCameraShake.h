#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_GiantRobotBeamActivateInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_GiantRobotBeamCameraShake.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotBeamCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> BeamCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_GiantRobotBeamActivateInfo> ActivateInfos;
    
    HIBIKI_API FHbkGimmick_GiantRobotBeamCameraShake();
};

