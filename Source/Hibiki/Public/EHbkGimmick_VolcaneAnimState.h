#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_VolcaneAnimState.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_VolcaneAnimState : uint8 {
    None,
    Idle,
    EruptionSign,
    Eruption,
};

