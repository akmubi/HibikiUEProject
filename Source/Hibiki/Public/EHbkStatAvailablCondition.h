#pragma once
#include "CoreMinimal.h"
#include "EHbkStatAvailablCondition.generated.h"

UENUM(BlueprintType)
enum class EHbkStatAvailablCondition : uint8 {
    None,
    Always,
    InMainGame,
    InSpectraRoom = 4,
    InRhythmTower = 8,
    InTrainingRoom = 16,
    InBPMRush = 32,
    InRhythmDungeon = 64,
};

