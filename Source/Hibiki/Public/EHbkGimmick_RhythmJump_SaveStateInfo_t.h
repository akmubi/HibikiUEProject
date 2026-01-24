#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_RhythmJump_SaveStateInfo_t.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_RhythmJump_SaveStateInfo_t : uint8 {
    RJS_NONE,
    RJS_ACTIVATE,
    RJS_DEACTIVATE,
};

