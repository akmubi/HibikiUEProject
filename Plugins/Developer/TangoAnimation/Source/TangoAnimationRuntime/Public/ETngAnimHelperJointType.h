#pragma once
#include "CoreMinimal.h"
#include "ETngAnimHelperJointType.generated.h"

UENUM(BlueprintType)
enum class ETngAnimHelperJointType : uint8 {
    None,
    Expression,
    DriveConstraint,
    DriveBlendShape,
    DriveMaterial,
};

