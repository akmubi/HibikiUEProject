#pragma once
#include "CoreMinimal.h"
#include "EEm7500ArmGuardState.generated.h"

UENUM(BlueprintType)
enum class EEm7500ArmGuardState : uint8 {
    State_Guard,
    State_Counter,
    State_EndWait,
    State_End,
};

