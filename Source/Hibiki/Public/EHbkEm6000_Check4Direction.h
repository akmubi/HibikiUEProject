#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_Check4Direction.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_Check4Direction : uint8 {
    None,
    Fwd,
    Right,
    Bwd,
    Left,
};

