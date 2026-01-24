#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmScoreResult.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmScoreResult : uint8 {
    Result_None,
    Result_Bad,
    Result_Bad_Late,
    Result_Bad_Early,
    Result_Normal,
    Result_Normal_Late,
    Result_Normal_Early,
    Result_Good,
    Result_Best,
};

