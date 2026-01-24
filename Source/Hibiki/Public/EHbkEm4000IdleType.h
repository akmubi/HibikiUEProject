#pragma once
#include "CoreMinimal.h"
#include "EHbkEm4000IdleType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm4000IdleType : uint8 {
    Upright,
    Attack,
    KnockBack,
};

