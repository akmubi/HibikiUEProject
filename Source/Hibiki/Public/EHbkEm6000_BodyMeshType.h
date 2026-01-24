#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_BodyMeshType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_BodyMeshType : uint8 {
    Human,
    Wolf,
    Transforming,
    Max,
};

