#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyRankTblType.generated.h"

UENUM(BlueprintType)
enum class EHbkDifficultyRankTblType : uint8 {
    Easy,
    MoreThanNormal,
    MoreThanVeryHard,
};

