#pragma once
#include "CoreMinimal.h"
#include "EHbkEnemyResetPlayMode.generated.h"

UENUM(BlueprintType)
enum class EHbkEnemyResetPlayMode : uint8 {
    Sequential,
    Shuffle,
};

