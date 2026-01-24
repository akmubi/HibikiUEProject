#pragma once
#include "CoreMinimal.h"
#include "EEm7500ArmAttackState.generated.h"

UENUM(BlueprintType)
enum class EEm7500ArmAttackState : uint8 {
    AttackState_Attack,
    AttackState_Down,
    AttackState_EndWait,
    AttackState_End,
};

