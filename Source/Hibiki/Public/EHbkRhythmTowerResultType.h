#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerResultType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmTowerResultType : uint8 {
    GiveUp,
    GameOver,
    Clear,
};

