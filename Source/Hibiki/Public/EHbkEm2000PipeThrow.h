#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000PipeThrow.generated.h"

UENUM(BlueprintType)
enum class EHbkEm2000PipeThrow : uint8 {
    Straight,
    Changing,
    BridgeBreakdown,
};

