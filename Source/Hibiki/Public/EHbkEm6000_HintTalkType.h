#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_HintTalkType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_HintTalkType : uint8 {
    INVALID,
    StartMiniGameInPhase2_1,
    StartMiniGameInPhase3_2,
    FailedMiniGameInPhase2_1,
};

