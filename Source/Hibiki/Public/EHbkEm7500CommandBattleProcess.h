#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500CommandBattleProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500CommandBattleProcess : uint8 {
    None,
    Begin,
    Update,
    End,
};

