#pragma once
#include "CoreMinimal.h"
#include "EHbkEmDisplayScrollType.generated.h"

UENUM(BlueprintType)
enum class EHbkEmDisplayScrollType : uint8 {
    None,
    Left,
    Right,
    Up,
    Down,
};

