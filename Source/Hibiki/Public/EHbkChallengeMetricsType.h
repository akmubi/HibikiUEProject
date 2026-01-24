#pragma once
#include "CoreMinimal.h"
#include "EHbkChallengeMetricsType.generated.h"

UENUM(BlueprintType)
enum class EHbkChallengeMetricsType : uint8 {
    Global,
    Stage,
    Profile,
};

