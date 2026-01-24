#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500EnergyWallStartingPointType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500EnergyWallStartingPointType : uint8 {
    Fixed,
    FixedSearch,
    FixedLane,
    AutoLane,
    RandomLane,
};

