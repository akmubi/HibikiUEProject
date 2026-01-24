#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailCameraController_CameraAsset.generated.h"

class AHbkGimmick_MagnetRailCamera;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCameraController_CameraAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_MagnetRailCamera* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraId;
    
    HIBIKI_API FHbkGimmick_MagnetRailCameraController_CameraAsset();
};

