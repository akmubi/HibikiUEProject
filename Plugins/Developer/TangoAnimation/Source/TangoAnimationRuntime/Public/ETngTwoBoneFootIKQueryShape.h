#pragma once
#include "CoreMinimal.h"
#include "ETngTwoBoneFootIKQueryShape.generated.h"

UENUM(BlueprintType)
enum class ETngTwoBoneFootIKQueryShape : uint8 {
    Line,
    Sphere,
    Box,
};

