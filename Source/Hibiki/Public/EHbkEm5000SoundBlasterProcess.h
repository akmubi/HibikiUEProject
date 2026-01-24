#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000SoundBlasterProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000SoundBlasterProcess : uint8 {
    None,
    Sign,
    Irradiate,
    Repel,
    Return,
};

