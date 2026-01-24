#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500RhythmParryProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500RhythmParryProcess : uint8 {
    None,
    BarWait,
    StartRhythmParry,
    ExecRhythmParry,
    SuccessRhythmParry,
    EndRhythmParry,
};

