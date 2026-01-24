#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0180_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_bg0180_SaveType : uint8 {
    BG0180_SAVE_NONE,
    BG0180_SAVE_OPEN,
    BG0180_SAVE_CLOSE,
    BG0180_SAVE_LOCK,
    BG0180_SAVE_UNLOCK,
};

