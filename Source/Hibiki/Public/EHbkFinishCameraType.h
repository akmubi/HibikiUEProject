#pragma once
#include "CoreMinimal.h"
#include "EHbkFinishCameraType.generated.h"

UENUM(BlueprintType)
enum class EHbkFinishCameraType : uint8 {
    None,
    FromAttacker,
    FromTarget,
    FromAttacker_InAir,
    FromTarget_InAir,
};

