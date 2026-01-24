#pragma once
#include "CoreMinimal.h"
#include "EHbkCameraViewTargetAfterDeactive.generated.h"

UENUM(BlueprintType)
enum class EHbkCameraViewTargetAfterDeactive : uint8 {
    Restore,
    Player,
};

