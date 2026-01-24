#pragma once
#include "CoreMinimal.h"
#include "EHbkBeatHitInputResult.generated.h"

UENUM(BlueprintType)
enum class EHbkBeatHitInputResult : uint8 {
    Miss,
    Good,
    Perfect,
};

