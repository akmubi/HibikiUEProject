#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0170_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_bg0170_SaveType : uint8 {
    BG0170_SAVE_NONE,
    BG0170_SAVE_SWITCH_NONE,
    BG0170_SAVE_SWITCH_ON,
    BG0170_SAVE_SWITCH_OFF,
};

