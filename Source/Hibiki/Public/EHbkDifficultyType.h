#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EHbkDifficultyType : uint8 {
    Easy,
    Normal,
    Hard,
    VeryHard,
    Master,
    Max,
};

