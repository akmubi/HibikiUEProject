#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_MagnetRailCameraTrigger_CameraShakeInfo.generated.h"

class UMatineeCameraShake;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCameraTrigger_CameraShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    HIBIKI_API FHbkGimmick_MagnetRailCameraTrigger_CameraShakeInfo();
};

