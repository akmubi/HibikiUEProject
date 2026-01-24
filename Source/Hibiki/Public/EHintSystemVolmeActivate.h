#pragma once
#include "CoreMinimal.h"
#include "EHintSystemVolmeActivate.generated.h"

UENUM(BlueprintType)
enum class EHintSystemVolmeActivate : uint8 {
    Activate,
    Deactivate,
    ActivateExtInt,
    DeactivateExtInt,
};

