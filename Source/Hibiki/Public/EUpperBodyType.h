#pragma once
#include "CoreMinimal.h"
#include "EUpperBodyType.generated.h"

UENUM(BlueprintType)
enum class EUpperBodyType : uint8 {
    DefRot,
    Beam,
    Gatling,
    AirShoot,
};

