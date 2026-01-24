#pragma once
#include "CoreMinimal.h"
#include "EHbkEnemyAppearType.generated.h"

UENUM(BlueprintType)
enum class EHbkEnemyAppearType : uint8 {
    None = 99,
    HatchFloor01 = 0,
    HatchFloor02,
    Warp01,
    PreIdle01,
    PreIdle02,
    PreIdle03,
    PreIdle04,
    PreIdle05,
};

