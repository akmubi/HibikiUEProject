#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_HatchType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_HatchType : uint8 {
    North,
    South,
    Max,
    None = Max,
};

