#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_GiantRobotBeamActivateType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_GiantRobotBeamActivateType : uint8 {
    None,
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

