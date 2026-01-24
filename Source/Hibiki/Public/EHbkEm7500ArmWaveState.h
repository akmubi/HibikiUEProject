#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500ArmWaveState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500ArmWaveState : uint8 {
    WaitActive,
    Active,
    None,
};

