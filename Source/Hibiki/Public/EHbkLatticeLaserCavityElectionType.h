#pragma once
#include "CoreMinimal.h"
#include "EHbkLatticeLaserCavityElectionType.generated.h"

UENUM(BlueprintType)
enum class EHbkLatticeLaserCavityElectionType : uint8 {
    Random,
    List,
};

