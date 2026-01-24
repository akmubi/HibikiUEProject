#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_RhythmActivate_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_RhythmActivate_SaveType : uint8 {
    RA_SAVE_NONE,
    RA_SAVE_ACTIVATE,
    RA_SAVE_DEACTIVATE,
};

