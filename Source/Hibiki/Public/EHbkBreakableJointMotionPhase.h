#pragma once
#include "CoreMinimal.h"
#include "EHbkBreakableJointMotionPhase.generated.h"

UENUM(BlueprintType)
enum class EHbkBreakableJointMotionPhase : uint8 {
    NotStarted,
    WaitStarting,
    Floating,
    BeingSucked,
    ReachedToSuckPoint,
};

