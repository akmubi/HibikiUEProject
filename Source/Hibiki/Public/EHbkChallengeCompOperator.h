#pragma once
#include "CoreMinimal.h"
#include "EHbkChallengeCompOperator.generated.h"

UENUM(BlueprintType)
enum class EHbkChallengeCompOperator : uint8 {
    Equal,
    GreaterEqual,
    Greater,
    LessEqual,
};

