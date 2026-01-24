#pragma once
#include "CoreMinimal.h"
#include "EHbkHitImpactState.generated.h"

UENUM(BlueprintType)
enum class EHbkHitImpactState : uint8 {
    StartState,
    FadeIn,
    HitImpact,
    FadeOut,
    EndState,
};

