#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_GiantRobotAActivateType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_GiantRobotAActivateType : uint8 {
    None,
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

