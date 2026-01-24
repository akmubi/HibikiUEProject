#pragma once
#include "CoreMinimal.h"
#include "ETngJCPSimulationSpace.generated.h"

UENUM(BlueprintType)
enum class ETngJCPSimulationSpace : uint8 {
    ComponentSpace,
    WorldSpace,
    BaseJointSpace,
};

