#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BuildingSlideCameraTrigger.h"
#include "HbkGimmick_MagnetRailCameraTriggerBase.h"
#include "HbkGimmick_BuildingSlideCameraTriggerController.generated.h"

class AHbkGimmick_BuildingSlideGuide;

UCLASS(Blueprintable)
class AHbkGimmick_BuildingSlideCameraTriggerController : public AHbkGimmick_MagnetRailCameraTriggerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_BuildingSlideGuide* BuildingSlideGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BuildingSlideCameraTrigger> CameraChangeTriggerList;
    
public:
    AHbkGimmick_BuildingSlideCameraTriggerController(const FObjectInitializer& ObjectInitializer);

};

