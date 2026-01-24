#pragma once
#include "CoreMinimal.h"
#include "EKaleMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EKaleMoveDirection : uint8 {
    Forward,
    Backward,
    Left,
    Right,
};

