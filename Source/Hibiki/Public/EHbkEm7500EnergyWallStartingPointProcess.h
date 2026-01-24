#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500EnergyWallStartingPointProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500EnergyWallStartingPointProcess : uint8 {
    None,
    Spawn,
    End,
};

