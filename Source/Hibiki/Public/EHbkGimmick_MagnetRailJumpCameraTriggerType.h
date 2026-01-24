#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailJumpCameraTriggerType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_MagnetRailJumpCameraTriggerType : uint8 {
    ChangeCamera,
    ChangeFocus,
    ChangePlayerCamera,
    PlayCameraShake,
    StopCameraShake,
    None,
};

