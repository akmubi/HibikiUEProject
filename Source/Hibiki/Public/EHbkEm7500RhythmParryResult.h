#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500RhythmParryResult.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500RhythmParryResult : uint8 {
    None,
    Success,
    Failed,
};

