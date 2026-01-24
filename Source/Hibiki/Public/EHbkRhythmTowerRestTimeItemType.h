#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerRestTimeItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmTowerRestTimeItemType : uint8 {
    None,
    Store,
    Ready,
    SuspendSave,
    GiveUp,
};

