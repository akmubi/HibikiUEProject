#pragma once
#include "CoreMinimal.h"
#include "EHbkEm0210WaveState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm0210WaveState : uint8 {
    WaitActive,
    Active,
    None,
};

