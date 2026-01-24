#pragma once
#include "CoreMinimal.h"
#include "EGimmickActivateSetting.generated.h"

UENUM(BlueprintType)
enum class EGimmickActivateSetting : uint8 {
    None,
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

