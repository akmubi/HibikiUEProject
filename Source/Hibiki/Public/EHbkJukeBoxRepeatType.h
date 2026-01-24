#pragma once
#include "CoreMinimal.h"
#include "EHbkJukeBoxRepeatType.generated.h"

UENUM(BlueprintType)
enum class EHbkJukeBoxRepeatType : uint8 {
    Default,
    Repeat_All,
    Repeat_OneSong,
};

