#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerStartHighScoreItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmTowerStartHighScoreItemType : uint8 {
    None,
    ClearWaveNum,
    ClearTime,
    ClearRank,
    ScoreRate,
};

