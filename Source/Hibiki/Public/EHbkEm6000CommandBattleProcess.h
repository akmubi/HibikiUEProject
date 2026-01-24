#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000CommandBattleProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000CommandBattleProcess : uint8 {
    None,
    Init,
    Begin,
    Update,
    Retry,
    End,
};

