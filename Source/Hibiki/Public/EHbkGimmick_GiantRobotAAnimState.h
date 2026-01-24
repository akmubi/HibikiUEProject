#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_GiantRobotAAnimState.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_GiantRobotAAnimState : uint8 {
    None,
    Appear,
    Aim,
    Fire,
};

