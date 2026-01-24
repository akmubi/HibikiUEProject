#pragma once
#include "CoreMinimal.h"
#include "EHbkEm0821State.generated.h"

UENUM(BlueprintType)
enum class EHbkEm0821State : uint8 {
    None = 99,
    ArmAttached = 0,
    SelfRunning,
    StingOnGround,
    SteeledArm,
    DownState,
    BreakOut,
};

