#pragma once
#include "CoreMinimal.h"
#include "EHbkRestartActivateType.generated.h"

UENUM(BlueprintType)
enum class EHbkRestartActivateType : uint8 {
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

