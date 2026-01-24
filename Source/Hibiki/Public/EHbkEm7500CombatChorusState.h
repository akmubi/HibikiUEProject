#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500CombatChorusState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500CombatChorusState : uint8 {
    Ready,
    MoveAround,
    Attack,
    Leave,
    Block,
};

