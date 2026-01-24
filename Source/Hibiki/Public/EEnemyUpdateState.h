#pragma once
#include "CoreMinimal.h"
#include "EEnemyUpdateState.generated.h"

UENUM(BlueprintType)
enum class EEnemyUpdateState : uint8 {
    Update,
    Terminate,
    Stopped,
    Aborted,
};

