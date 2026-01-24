#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailPlaceObject_TriggerType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_MagnetRailPlaceObject_TriggerType : uint8 {
    None,
    Activate,
    Item,
};

