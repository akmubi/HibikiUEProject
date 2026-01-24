#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleType.generated.h"

UENUM(BlueprintType)
enum class EHbkBossCommandBattleType : uint8 {
    None,
    X,
    Y,
    A,
    LB,
    RB,
};

