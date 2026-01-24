#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickOneShotAnimStartType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickOneShotAnimStartType : uint8 {
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

