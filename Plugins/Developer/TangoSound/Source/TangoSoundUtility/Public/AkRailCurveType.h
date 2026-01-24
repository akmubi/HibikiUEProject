#pragma once
#include "CoreMinimal.h"
#include "AkRailCurveType.generated.h"

UENUM(BlueprintType)
enum class AkRailCurveType : uint8 {
    LOG3,
    SINE_IN,
    INVERTED_S,
    LINEAR,
    S_CURVE,
    SINE_OUT,
    EXP3,
};

