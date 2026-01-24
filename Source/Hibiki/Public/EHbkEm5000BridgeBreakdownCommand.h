#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000BridgeBreakdownCommand.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000BridgeBreakdownCommand : uint8 {
    Left,
    Right,
    HandClap,
    Turn,
};

