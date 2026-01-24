#pragma once
#include "CoreMinimal.h"
#include "EHbkScreenWipeType.generated.h"

UENUM(BlueprintType)
enum class EHbkScreenWipeType : uint8 {
    None,
    Diagonal_Vertical,
    Diagonal_Horizontal,
    Diagonal_Right,
    Diagonal_Left,
    Diagonal_Up,
    Diagonal_Down,
    Flat,
    Roll,
    Jaggy_Right,
    Jaggy_Left,
    Smoke,
    Smoke2,
};

