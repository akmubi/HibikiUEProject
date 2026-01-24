#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerStartInfoType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmTowerStartInfoType : uint8 {
    None,
    NormalModeHighScore,
    NormalModeSuspendSave,
};

