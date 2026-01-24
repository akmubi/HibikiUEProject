#pragma once
#include "CoreMinimal.h"
#include "FHbkGimmick_LevelVisibilityActivateType.generated.h"

UENUM(BlueprintType)
enum class FHbkGimmick_LevelVisibilityActivateType : uint8 {
    None,
    Activate,
    Deactivate,
    ActivateExtInt,
    DeactivateExtInt,
};

