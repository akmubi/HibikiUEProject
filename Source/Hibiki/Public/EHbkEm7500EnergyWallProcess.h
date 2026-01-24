#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500EnergyWallProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500EnergyWallProcess : uint8 {
    None,
    Notice,
    Attack,
    End,
};

