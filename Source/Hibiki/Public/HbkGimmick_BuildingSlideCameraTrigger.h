#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_BuildingSlideCameraTriggerType.h"
#include "HbkGimmick_MagnetRailCameraTrigger_CameraShakeInfo.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeFocusInfo.h"
#include "HbkGimmick_BuildingSlideCameraTrigger.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BuildingSlideCameraTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_BuildingSlideCameraTriggerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo ChangeCameraInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_ChangeFocusInfo ChangeFocusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_CameraShakeInfo CameraShakeInfo;
    
    HIBIKI_API FHbkGimmick_BuildingSlideCameraTrigger();
};

