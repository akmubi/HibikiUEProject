#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_GiantRobotCCameraShake.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotCCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ChargeCameraShake;
    
    HIBIKI_API FHbkGimmick_GiantRobotCCameraShake();
};

