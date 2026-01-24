#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000RhythmParryResult.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000RhythmParryResult : uint8 {
    None,
    Success,
    Failed,
};

