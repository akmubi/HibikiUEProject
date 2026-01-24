#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000HintTalkType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000HintTalkType : uint8 {
    INVALID,
    P1_Start,
    GuardBreak,
    RecoveryFromDownState,
};

