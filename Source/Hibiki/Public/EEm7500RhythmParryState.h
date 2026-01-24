#pragma once
#include "CoreMinimal.h"
#include "EEm7500RhythmParryState.generated.h"

UENUM(BlueprintType)
enum class EEm7500RhythmParryState : uint8 {
    NotExec,
    Exec,
    Complete,
};

