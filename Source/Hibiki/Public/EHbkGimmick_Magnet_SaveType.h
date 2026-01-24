#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_Magnet_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_Magnet_SaveType : uint8 {
    MAGNET_SAVE_NONE,
    MAGNET_SAVE_ACTIVATE,
    MAGNET_SAVE_DEACTIVATE,
    MAGNET_SAVE_HIDDEN,
};

