#pragma once
#include "CoreMinimal.h"
#include "ETngAnimHelperJointReferenceType.generated.h"

UENUM(BlueprintType)
enum class ETngAnimHelperJointReferenceType : uint8 {
    None,
    AnotherJoint,
    BindPose,
    ParentJoint,
};

