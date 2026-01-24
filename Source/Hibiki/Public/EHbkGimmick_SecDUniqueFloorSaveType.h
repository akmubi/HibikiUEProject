#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SecDUniqueFloorSaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_SecDUniqueFloorSaveType : uint8 {
    SUF_SVT_NONE,
    SUF_SVT_ACTIVATE,
    SUF_SVT_DEACTIVATE,
};

