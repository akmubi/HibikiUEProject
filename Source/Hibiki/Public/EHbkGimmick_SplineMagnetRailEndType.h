#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SplineMagnetRailEndType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_SplineMagnetRailEndType : uint8 {
    None,
    Warp,
    Jump,
    ShortAnim,
    St04EscapeToEV,
};

