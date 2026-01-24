#pragma once
#include "CoreMinimal.h"
#include "EHbkCommandBattleTornadoProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkCommandBattleTornadoProcess : uint8 {
    None,
    Begin,
    Update,
    Success,
    Failed,
    End,
};

