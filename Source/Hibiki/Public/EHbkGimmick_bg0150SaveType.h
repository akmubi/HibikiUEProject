#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0150SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_bg0150SaveType : uint8 {
    BG0150_SVT_NONE,
    BG0150_SVT_ACTIVATE,
    BG0150_SVT_DEACTIVATE,
};

