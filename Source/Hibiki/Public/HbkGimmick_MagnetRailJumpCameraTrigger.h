#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailCameraTriggerBase.h"
#include "HbkGimmick_MagnetRailJumpCameraTriggerInfo.h"
#include "HbkGimmick_MagnetRailJumpCameraTrigger.generated.h"

class AHbkGimmick_MagnetRailJump;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailJumpCameraTrigger : public AHbkGimmick_MagnetRailCameraTriggerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_MagnetRailJump* MagnetRailJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailJumpCameraTriggerInfo MagnetSuccessCameraChangeTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_MagnetRailJumpCameraTriggerInfo> CameraChangeTriggerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_MagnetRailJumpCameraTriggerInfo> JumpSuccessCameraChangeTriggerList;
    
public:
    AHbkGimmick_MagnetRailJumpCameraTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressKeyMagnet();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSuccessSpline();
    
};

