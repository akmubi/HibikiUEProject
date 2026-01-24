#pragma once
#include "CoreMinimal.h"
#include "ETngAnimHelperJointRotationSequence.generated.h"

UENUM(BlueprintType)
enum class ETngAnimHelperJointRotationSequence : uint8 {
    None,
    XYZ,
    YZX,
    ZXY,
    XZY,
    YXZ,
    ZYX,
};

