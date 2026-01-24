#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailCamera_CameraBlend.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeCameraQteSuccessInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraQteSuccessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCamera_CameraBlend CameraBrend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreCameraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCamera_CameraBlend RestoreCameraBrend;
    
    HIBIKI_API FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraQteSuccessInfo();
};

