#pragma once
#include "CoreMinimal.h"
#include "EHbkMetricsOnlineStatValueType.generated.h"

UENUM(BlueprintType)
enum class EHbkMetricsOnlineStatValueType : uint8 {
    Int32,
    UInt32,
    Int64,
    UInt64,
};

