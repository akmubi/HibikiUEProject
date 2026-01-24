#pragma once
#include "CoreMinimal.h"
#include "EPBDInitialDistribution.generated.h"

UENUM()
enum class EPBDInitialDistribution : int32 {
    SphereRandom,
    PlaneUniform,
    PlaneRandom,
};

