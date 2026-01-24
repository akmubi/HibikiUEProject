#pragma once
#include "CoreMinimal.h"
#include "EHbkBoxMeshPivotType.generated.h"

UENUM(BlueprintType)
enum class EHbkBoxMeshPivotType : uint8 {
    Center,
    CenterBottom,
    CenterTop,
    NearCenter,
    FarCenter,
    Custom,
};

