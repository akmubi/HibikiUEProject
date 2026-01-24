#pragma once
#include "CoreMinimal.h"
#include "EHbkDialogFlags.generated.h"

UENUM(BlueprintType)
enum class EHbkDialogFlags : uint8 {
    None,
    Unclearable,
    NoPause,
    ExcludeFadeCondition = 4,
    PushTail = 8,
};

