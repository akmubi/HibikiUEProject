#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000BridgeBreakdownThrowType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm2000BridgeBreakdownThrowType : uint8 {
    Throw,
    ThrowInARow,
};

