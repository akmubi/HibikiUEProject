#pragma once
#include "CoreMinimal.h"
#include "ETngKeyButtonMap.generated.h"

UENUM(BlueprintType)
enum class ETngKeyButtonMap : uint8 {
    Accept,
    Cancel,
    Reset,
    Option,
    DPadUp,
    DPadDown,
    DPadLeft,
    DPadRight,
    LStickUp,
    LStickDown,
    LStickLeft,
    LStickRight,
    RStickUp,
    RStickDown,
    RStickLeft,
    RStickRight,
    StickThumbL,
    StickThumbR,
    ShoulderL,
    ShoulderR,
    TriggerL,
    TriggerR,
    Start,
    Select,
    MouseL,
    MouseR,
    MouseM,
    MouseWheelUp,
    MouseWheelDown,
    MouseExention1,
    MouseExention2,
    Max,
};

