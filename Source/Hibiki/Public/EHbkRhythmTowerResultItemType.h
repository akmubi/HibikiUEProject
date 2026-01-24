#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerResultItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmTowerResultItemType : uint8 {
    None,
    ClearWaveNum,
    ClearTime,
    ClearRank,
    JustTimingPercent,
    MaxComboCount,
    ReceivedDamage,
    RemainingTime,
    TotalScore,
};

