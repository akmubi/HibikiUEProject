#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000BridgeBreakdownAction.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000BridgeBreakdownAction : uint8 {
    None,
    LeftStart,
    LeftEnd,
    LeftToRight,
    LeftToClap,
    RightStart,
    RightEnd,
    RightToLeft,
    RightToClap,
    ClapStart,
    ClapEnd,
    ClapToLeft,
    ClapToRight,
    ClapToTurn,
    ClapToClapQuarter,
    ClapToClap8th,
    TurnStart,
    TurnEnd,
    TurnToTurn,
    TurnToClap,
};

