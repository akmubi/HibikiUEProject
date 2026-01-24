#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickTransformParamType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickTransformParamType : uint8 {
    None,
    Default,
    Activate,
    Deactivate,
    ActivateExtInt,
    DeactivateExtInt,
};

