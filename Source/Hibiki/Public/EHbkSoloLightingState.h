#pragma once
#include "CoreMinimal.h"
#include "EHbkSoloLightingState.generated.h"

UENUM(BlueprintType)
enum class EHbkSoloLightingState : uint8 {
    PreBlendInState,
    BlendInState,
    ActiveState,
    PreBlendOutState,
    BlendOutState,
    DestroyState,
};

