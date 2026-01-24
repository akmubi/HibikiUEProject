#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500GroundSlashAlphaProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500GroundSlashAlphaProcess : uint8 {
    None,
    Notice,
    Attack,
    End,
};

