#pragma once
#include "CoreMinimal.h"
#include "EHintSystemVolmeStateType.generated.h"

UENUM(BlueprintType)
enum class EHintSystemVolmeStateType : uint8 {
    Default,
    Activate,
    Deactivate,
};

