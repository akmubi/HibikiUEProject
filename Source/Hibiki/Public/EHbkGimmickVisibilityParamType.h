#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickVisibilityParamType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickVisibilityParamType : uint8 {
    None,
    Default,
    Activate,
    Deactivate,
    ActivateExtInt,
    DeactivateExtInt,
};

