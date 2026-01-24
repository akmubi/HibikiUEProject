#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HbkGimmick_MagnetRailCameraController_CameraAsset.h"
#include "HbkGimmick_MagnetRailCamera_CameraBlend.h"
#include "HbkGimmick_MagnetRailCamera_DieCameraInfo.h"
#include "HbkGimmick_MagnetRailCameraController.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailCameraController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_MagnetRailCameraController_CameraAsset> CameraList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RailEndCameraRotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DieCameraFocusOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DieCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCamera_CameraBlend DieCameraBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCamera_DieCameraInfo DieCameraInfo;
    
public:
    AHbkGimmick_MagnetRailCameraController(const FObjectInitializer& ObjectInitializer);

};

