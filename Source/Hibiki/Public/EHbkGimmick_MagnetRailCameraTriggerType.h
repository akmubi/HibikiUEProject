#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailCameraTriggerType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_MagnetRailCameraTriggerType : uint8 {
    ChangeCamera,
    SetQteSuccessCamera,
    DisableQteSuccessCamera,
    ChangeFocus,
    ChangePlayerCamera,
    PlayCameraShake,
    StopCameraShake,
    None,
};

