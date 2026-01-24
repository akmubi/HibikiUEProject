#pragma once
#include "CoreMinimal.h"
#include "EHbkEnemyFireState.generated.h"

UENUM(BlueprintType)
enum class EHbkEnemyFireState : uint8 {
    WaitActive,
    Active,
    None,
};

