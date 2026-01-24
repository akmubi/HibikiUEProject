#pragma once
#include "CoreMinimal.h"
#include "EHbkEm1000DamageState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm1000DamageState : uint8 {
    None,
    Idle,
    OneShotPunch,
    Continuous,
    QTEChance,
    MissileLaunching,
    LaserLaunched,
};

