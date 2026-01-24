#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickVfxRange.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickVfxRange : uint8 {
    None,
    Box,
    Sphere,
    Cylinder,
};

