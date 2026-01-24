#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmDungeonItemBuffState.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmDungeonItemBuffState : uint8 {
    None,
    Buff,
    Debuff,
};

