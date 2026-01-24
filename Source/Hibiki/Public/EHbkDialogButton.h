#pragma once
#include "CoreMinimal.h"
#include "EHbkDialogButton.generated.h"

UENUM(BlueprintType)
enum class EHbkDialogButton : uint8 {
    Yes,
    No,
    Accept,
    Cancel,
    Continue,
    Agree,
    Max,
};

