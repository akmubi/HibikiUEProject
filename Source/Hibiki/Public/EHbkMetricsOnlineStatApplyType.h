#pragma once
#include "CoreMinimal.h"
#include "EHbkMetricsOnlineStatApplyType.generated.h"

UENUM(BlueprintType)
enum class EHbkMetricsOnlineStatApplyType : uint8 {
    CurrentGame,
    Delta,
};

