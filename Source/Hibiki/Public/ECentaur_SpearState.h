#pragma once
#include "CoreMinimal.h"
#include "ECentaur_SpearState.generated.h"

UENUM(BlueprintType)
enum class ECentaur_SpearState : uint8 {
    Idle,
    PreIdle,
    Throwing,
    Returning,
    GrantBarrier,
    Attacking,
    Other1,
    Other2,
    Other3,
};

