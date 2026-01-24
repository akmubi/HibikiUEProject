#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailObstacleAvoidType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_MagnetRailObstacleAvoidType : uint8 {
    None,
    Right,
    Left,
    QTE,
    QTE_Enemy,
};

