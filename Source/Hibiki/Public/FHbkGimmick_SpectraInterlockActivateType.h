#pragma once
#include "CoreMinimal.h"
#include "FHbkGimmick_SpectraInterlockActivateType.generated.h"

UENUM(BlueprintType)
enum class FHbkGimmick_SpectraInterlockActivateType : uint8 {
    None,
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
};

