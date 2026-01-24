#pragma once
#include "CoreMinimal.h"
#include "EHbkLaserState.generated.h"

UENUM(BlueprintType)
enum class EHbkLaserState : uint8 {
    State_None,
    State_Attack,
    State_AttackEnd,
};

