#pragma once
#include "CoreMinimal.h"
#include "EHbkSideStoryBossControl.generated.h"

UENUM(BlueprintType)
enum class EHbkSideStoryBossControl : uint8 {
    None,
    TurnToCenter,
    MoveToCenterPos,
    ReturnToInitPos,
    LandingToInitPos,
    Action,
    Attack,
};

