#pragma once
#include "CoreMinimal.h"
#include "EHbkCameraMode.generated.h"

UENUM(BlueprintType)
enum class EHbkCameraMode : uint8 {
    Normal,
    FocalPoint,
    Rail,
    Azito,
};

