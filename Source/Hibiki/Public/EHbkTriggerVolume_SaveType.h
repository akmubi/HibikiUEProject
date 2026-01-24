#pragma once
#include "CoreMinimal.h"
#include "EHbkTriggerVolume_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkTriggerVolume_SaveType : uint8 {
    HBKTRGVLM_NONE,
    HBKTRGVLM_ACTIVATE,
    HBKTRGVLM_DEACTIVATE,
    HBKTRGVLM_HITBEGIN,
    HBKTRGVLM_ENDOVERLAP,
    HBKTRGVLM_DESTROY,
};

