#pragma once
#include "CoreMinimal.h"
#include "EHbkHologramPostState.generated.h"

UENUM(BlueprintType)
enum class EHbkHologramPostState : uint8 {
    PreBlendInState,
    BlendInState,
    ActiveState,
    PreBlendOutState,
    BlendOutState,
    DestroyState,
};

