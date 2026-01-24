#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_RectAreaType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_RectAreaType : uint8 {
    LF,
    RF,
    LB,
    RB,
    Max,
};

