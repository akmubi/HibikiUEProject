#pragma once
#include "CoreMinimal.h"
#include "EHbkEnginePostProcessVolumePatch_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkEnginePostProcessVolumePatch_SaveType : uint8 {
    SAVE_NONE,
    SAVE_ACTIVATE,
    SAVE_ACTIVATE_EXTINT,
    SAVE_DEACTIVATE,
    SAVE_DEACTIVATE_EXTINT,
};

