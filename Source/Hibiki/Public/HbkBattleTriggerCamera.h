#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickTriggerCameraParamMap.h"
#include "HbkBattleTriggerCamera.generated.h"

USTRUCT(BlueprintType)
struct FHbkBattleTriggerCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTriggerCameraParamMap EnemySupplyCamera;
    
    HIBIKI_API FHbkBattleTriggerCamera();
};

