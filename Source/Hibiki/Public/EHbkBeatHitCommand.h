#pragma once
#include "CoreMinimal.h"
#include "EHbkBeatHitCommand.generated.h"

UENUM(BlueprintType)
enum class EHbkBeatHitCommand : uint8 {
    Command_None,
    Command_Rest,
    Command_LightAttack,
    Command_HeavyAttack,
    Command_BeatHit,
    Command_Dash,
};

