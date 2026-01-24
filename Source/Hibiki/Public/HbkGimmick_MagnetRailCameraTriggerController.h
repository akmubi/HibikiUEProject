#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailCameraTrigger.h"
#include "HbkGimmick_MagnetRailCameraTriggerBase.h"
#include "HbkGimmick_MagnetRailCameraTriggerController.generated.h"

class AHbkGimmick_SplineMagnet;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailCameraTriggerController : public AHbkGimmick_MagnetRailCameraTriggerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_SplineMagnet* SplineMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_MagnetRailCameraTrigger> CameraChangeTriggerList;
    
public:
    AHbkGimmick_MagnetRailCameraTriggerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnQTESuccess();
    
};

