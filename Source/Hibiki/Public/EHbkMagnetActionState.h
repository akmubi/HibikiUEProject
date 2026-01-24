#pragma once
#include "CoreMinimal.h"
#include "EHbkMagnetActionState.generated.h"

UENUM(BlueprintType)
enum class EHbkMagnetActionState : uint8 {
    State_None,
    State_Idle,
    State_Available,
    State_ForceAvailable,
    State_ScreenEdgeNear,
    State_ScreenEdgeFar,
};

