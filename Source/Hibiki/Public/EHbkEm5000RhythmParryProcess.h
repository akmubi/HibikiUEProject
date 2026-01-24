#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000RhythmParryProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000RhythmParryProcess : uint8 {
    None,
    FirstPreparation,
    FirstRhythmParry,
    FirstWaitBarHead,
    SecondPreparation,
    SecondRhythmParry,
    SecondWaitBarHead,
    Finished,
};

