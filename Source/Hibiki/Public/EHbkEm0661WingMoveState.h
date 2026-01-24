#pragma once
#include "CoreMinimal.h"
#include "EHbkEm0661WingMoveState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm0661WingMoveState : uint8 {
    Move_Pre,
    Move,
    Move_ToBody,
    Move_GravityHold,
    Move_Blow,
    Move_BlowEnd,
    Move_End,
};

