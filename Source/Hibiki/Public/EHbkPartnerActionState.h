#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerActionState.generated.h"

UENUM(BlueprintType)
enum class EHbkPartnerActionState : uint8 {
    None,
    Idle,
    Appearing,
    Aiming,
    Prepareing,
    WaitingOrder,
    DuringAction,
    WaitDisappear,
    Disappearing,
    InCombat,
};

