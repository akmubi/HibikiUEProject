#pragma once
#include "CoreMinimal.h"
#include "EHbkCostumePart.generated.h"

UENUM(BlueprintType)
enum class EHbkCostumePart : uint8 {
    Setup,
    Head,
    Tops,
    Inner,
    Bottoms,
    Shoes,
    Muffler,
    RoboArm,
    Accessory,
    Guitar,
};

