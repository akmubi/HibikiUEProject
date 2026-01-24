#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000BridgeBreakdownMode.generated.h"

UENUM(BlueprintType)
enum class EHbkEm2000BridgeBreakdownMode : uint8 {
    None,
    Left,
    Right,
};

