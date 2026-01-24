#pragma once
#include "CoreMinimal.h"
#include "EHbkMagnetAction.generated.h"

UENUM(BlueprintType)
enum class EHbkMagnetAction : uint8 {
    State_None,
    State_Idle,
    State_Offscreen,
    State_Visible,
    State_Available,
    State_ForceAvailable,
};

