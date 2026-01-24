#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo.h"
#include "HbkGimmick_SplineMagnetBase.generated.h"

class AActor;
class AHbkGimmick_MagnetRailCameraController;

UCLASS(Blueprintable)
class AHbkGimmick_SplineMagnetBase : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TakeOverCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* moveSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_MagnetRailCameraController* CameraController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo StartCameraInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailCameraTrigger_ChangeCameraInfo EndCameraInfo;
    
public:
    AHbkGimmick_SplineMagnetBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMagnetPointEnabled(bool Enabled, bool ForceTargetPoint, bool ForceDisplayTargetPoint);
    
};

