#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyEnemySetTblType.generated.h"

UENUM(BlueprintType)
enum class EHbkDifficultyEnemySetTblType : uint8 {
    LessThanHard,
    MoreThanVeryHard,
};

