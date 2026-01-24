#pragma once
#include "CoreMinimal.h"
#include "EHbkEm0570WaveState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm0570WaveState : uint8 {
    WaitActive,
    Active,
    None,
};

