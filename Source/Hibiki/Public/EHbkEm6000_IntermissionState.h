#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_IntermissionState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_IntermissionState : uint8 {
    None,
    Update,
    Max,
};

