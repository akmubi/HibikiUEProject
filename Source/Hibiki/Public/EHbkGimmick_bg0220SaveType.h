#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0220SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_bg0220SaveType : uint8 {
    BG0220_SVT_NONE,
    BG0220_SVT_ACTIVATE,
    BG0220_SVT_DEACTIVATE,
};

