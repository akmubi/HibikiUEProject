#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SecDClosedLaserSaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_SecDClosedLaserSaveType : uint8 {
    SCL_NONE,
    SCL_ACTIVATE,
    SCL_DEACTIVATE,
};

