#pragma once
#include "CoreMinimal.h"
#include "ETngButtonDirection.generated.h"

UENUM(BlueprintType)
enum class ETngButtonDirection : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
};

