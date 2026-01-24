#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickTriggerCameraParam.h"
#include "HbkGimmickTriggerCameraParamMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickTriggerCameraParamMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkGimmickTriggerCameraParam> Cameras;
    
    HIBIKI_API FHbkGimmickTriggerCameraParamMap();
};

