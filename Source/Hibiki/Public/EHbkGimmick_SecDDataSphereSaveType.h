#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SecDDataSphereSaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_SecDDataSphereSaveType : uint8 {
    SAVE_NONE,
    SAVE_SUCCESS,
    SAVE_ACTIVATE,
    SAVE_BH_ACTINTERACT,
    SAVE_MACARON_DAMAGE,
};

