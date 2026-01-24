#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000FancyGazerProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000FancyGazerProcess : uint8 {
    None,
    Wait,
    Attack,
    End,
};

