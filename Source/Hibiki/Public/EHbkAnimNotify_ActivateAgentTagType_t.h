#pragma once
#include "CoreMinimal.h"
#include "EHbkAnimNotify_ActivateAgentTagType_t.generated.h"

UENUM(BlueprintType)
enum class EHbkAnimNotify_ActivateAgentTagType_t : uint8 {
    None,
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

