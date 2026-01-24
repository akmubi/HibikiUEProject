#pragma once
#include "CoreMinimal.h"
#include "EHbkLatticeLaserProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkLatticeLaserProcess : uint8 {
    None,
    Move,
    Switch,
    SwitchAndMove,
    Destroy,
};

