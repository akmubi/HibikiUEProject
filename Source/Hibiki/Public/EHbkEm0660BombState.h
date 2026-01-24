#pragma once
#include "CoreMinimal.h"
#include "EHbkEm0660BombState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm0660BombState : uint8 {
    Throw_Pre,
    Throw,
    Activate_Wait,
    Activate_Pre,
    Activate,
    Activate_End,
};

