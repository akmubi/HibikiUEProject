#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerMetricsStatModifier.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerMetricsStatModifier : uint8 {
    Latest,
    Sum,
    Min,
    Max,
    BitAnd,
    BitOr,
};

