#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0200SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_bg0200SaveType : uint8 {
    BG0200_SVT_NONE,
    BG0200_SVT_ACTIVATE,
    BG0200_SVT_DEACTIVATE,
};

