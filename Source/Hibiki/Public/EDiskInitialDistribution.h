#pragma once
#include "CoreMinimal.h"
#include "EDiskInitialDistribution.generated.h"

UENUM()
enum class EDiskInitialDistribution : int32 {
    PlaneUniform,
    PlaneRandom,
};

