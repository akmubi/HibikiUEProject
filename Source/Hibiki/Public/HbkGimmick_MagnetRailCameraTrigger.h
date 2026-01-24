#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailCameraTriggerType.h"
#include "HbkGimmick_MagnetRailCameraTrigger_CameraShakeInfo.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeCameraQteSuccessInfo.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeFocusInfo.h"
#include "HbkGimmick_MagnetRailCameraTrigger.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCameraTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetRailCameraTriggerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo ChangeCameraInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraQteSuccessInfo ChangeCameraQteSuccessInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_ChangeFocusInfo ChangeFocusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_CameraShakeInfo CameraShakeInfo;
    
    HIBIKI_API FHbkGimmick_MagnetRailCameraTrigger();
};

