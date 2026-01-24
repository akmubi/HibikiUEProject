#pragma once
#include "CoreMinimal.h"
#include "EHbkLatticeLaserType.generated.h"

UENUM(BlueprintType)
enum class EHbkLatticeLaserType : uint8 {
    None,
    Horizontal,
    Vertical,
};

