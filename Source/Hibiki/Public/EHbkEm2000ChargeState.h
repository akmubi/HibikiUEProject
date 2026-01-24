#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000ChargeState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm2000ChargeState : uint8 {
    None,
    Charged,
};

