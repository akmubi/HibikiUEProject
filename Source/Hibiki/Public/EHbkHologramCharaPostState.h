#pragma once
#include "CoreMinimal.h"
#include "EHbkHologramCharaPostState.generated.h"

UENUM(BlueprintType)
enum class EHbkHologramCharaPostState : uint8 {
    PreBlendInState,
    BlendInState,
    ActiveState,
    PreBlendOutState,
    BlendOutState,
    DestroyState,
};

