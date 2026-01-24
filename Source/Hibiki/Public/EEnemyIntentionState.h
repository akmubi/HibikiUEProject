#pragma once
#include "CoreMinimal.h"
#include "EEnemyIntentionState.generated.h"

UENUM(BlueprintType)
enum class EEnemyIntentionState : uint8 {
    EIS_Idle,
    EIS_Combat,
    EIS_Patrol,
    EIS_Sleep,
    EIS_SubLiftAttack,
    EIS_Tutorial,
};

