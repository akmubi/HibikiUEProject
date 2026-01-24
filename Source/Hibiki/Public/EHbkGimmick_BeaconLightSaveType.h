#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_BeaconLightSaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_BeaconLightSaveType : uint8 {
    BL_SVT_NONE,
    BL_SVT_ACTIVATE,
    BL_SVT_DEACTIVATE,
    BL_SVT_ACTIVATE_EXTINT,
    BL_SVT_DEACTIVATE_EXTINT,
};

