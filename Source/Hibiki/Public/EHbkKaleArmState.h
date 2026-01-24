#pragma once
#include "CoreMinimal.h"
#include "EHbkKaleArmState.generated.h"

UENUM(BlueprintType)
enum class EHbkKaleArmState : uint8 {
    Ready,
    Break,
    Beam,
    ArmWhip,
};

