#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500ThunderProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500ThunderProcess : uint8 {
    None,
    Notice,
    Attack,
    End,
};

