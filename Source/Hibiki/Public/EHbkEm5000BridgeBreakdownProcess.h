#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000BridgeBreakdownProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000BridgeBreakdownProcess : uint8 {
    None,
    Begin,
    ExecuteDance,
    ExecuteGuitar,
    Judgement,
    End,
};

