#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmMeterSuspendReasonType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmMeterSuspendReasonType : uint8 {
    None,
    Reason_Event,
    Reason_PlayerAction,
    Reason_PlayerControl = 4,
};

