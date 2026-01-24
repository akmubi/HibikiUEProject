#pragma once
#include "CoreMinimal.h"
#include "EHbkHideOutChallengeStatus.generated.h"

UENUM(BlueprintType)
enum class EHbkHideOutChallengeStatus : uint8 {
    Locked,
    Progress,
    Unlocked,
    Max,
};

