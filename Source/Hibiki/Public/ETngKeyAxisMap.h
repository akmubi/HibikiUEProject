#pragma once
#include "CoreMinimal.h"
#include "ETngKeyAxisMap.generated.h"

UENUM(BlueprintType)
enum class ETngKeyAxisMap : uint8 {
    LStickX,
    LStickY,
    RStickX,
    RStickY,
    TriggerL,
    TriggerR,
    RNoDeadZoneStickX,
    RNoDeadZoneStickY,
    LNoDeadZoneStickX,
    LNoDeadZoneStickY,
    Max,
};

