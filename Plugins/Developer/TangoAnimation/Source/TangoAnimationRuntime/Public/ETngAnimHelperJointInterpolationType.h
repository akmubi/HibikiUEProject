#pragma once
#include "CoreMinimal.h"
#include "ETngAnimHelperJointInterpolationType.generated.h"

UENUM(BlueprintType)
enum class ETngAnimHelperJointInterpolationType : uint8 {
    None,
    Linear,
    Flat,
    Spline,
};

