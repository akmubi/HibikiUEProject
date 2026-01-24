#pragma once
#include "CoreMinimal.h"
#include "EHbkHideOutExtraChallengeStatus.generated.h"

UENUM(BlueprintType)
enum class EHbkHideOutExtraChallengeStatus : uint8 {
    Locked,
    Progress,
    Unlocked,
    Max,
};

