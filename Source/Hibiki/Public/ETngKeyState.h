#pragma once
#include "CoreMinimal.h"
#include "ETngKeyState.generated.h"

UENUM(BlueprintType)
enum class ETngKeyState : uint8 {
    None,
    Pressed,
    Press,
    Repeat = 4,
    Release = 8,
};

