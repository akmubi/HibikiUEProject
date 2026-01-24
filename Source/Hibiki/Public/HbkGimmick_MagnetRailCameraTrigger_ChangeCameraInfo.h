#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailCamera_CameraBlend.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCamera_CameraBlend CameraBrend;
    
    HIBIKI_API FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo();
};

