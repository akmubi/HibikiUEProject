#pragma once
#include "CoreMinimal.h"
#include "EHbkGameplayTask_FlickGameEnvPhaseActivateMode.generated.h"

UENUM(BlueprintType)
enum class EHbkGameplayTask_FlickGameEnvPhaseActivateMode : uint8 {
    None,
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

