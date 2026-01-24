#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickRotationParamType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickRotationParamType : uint8 {
    None,
    Default,
    Activate,
    Deactivate,
    ActivateExtInt,
    DeactivateExtInt,
    BeginBattle,
    EndBattle,
};

