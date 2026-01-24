#pragma once
#include "CoreMinimal.h"
#include "EHbkActivateKeyMode.generated.h"

UENUM(BlueprintType)
enum class EHbkActivateKeyMode : uint8 {
    UseTag,
    ActivateOwnerTrack,
    DeactivateOwnerTrack,
    InteractOwnerTrack,
};

