#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500LightningDragonProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500LightningDragonProcess : uint8 {
    None,
    Notice,
    Attack,
    End,
};

