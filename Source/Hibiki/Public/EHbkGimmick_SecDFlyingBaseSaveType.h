#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SecDFlyingBaseSaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_SecDFlyingBaseSaveType : uint8 {
    SFB_SAVE_NONE,
    SFB_ACTIVATE_ON,
    SFB_MOVEPOS_START,
    SFB_MOVEPOS_END,
};

