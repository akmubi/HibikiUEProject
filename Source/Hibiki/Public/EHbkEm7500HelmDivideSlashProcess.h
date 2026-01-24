#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500HelmDivideSlashProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500HelmDivideSlashProcess : uint8 {
    None,
    Notice,
    Attack,
    End,
};

