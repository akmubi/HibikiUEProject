#pragma once
#include "CoreMinimal.h"
#include "EHbkBossSPCancelType.generated.h"

UENUM(BlueprintType)
enum class EHbkBossSPCancelType : uint8 {
    None,
    NoneAndInvincible,
    CancelIfHit,
    Cancel,
};

