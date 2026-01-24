#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg1230_SaveType_t.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_bg1230_SaveType_t : uint8 {
    BG1230_SAVE_NONE,
    BG1230_SAVE_INTERACT,
    BG1230_SAVE_ROT,
    BG1230_SAVE_BATTLEEND,
    BG1230_SAVE_RESUME,
};

