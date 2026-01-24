#pragma once
#include "CoreMinimal.h"
#include "EDrawWidgetType.generated.h"

UENUM(BlueprintType)
enum class EDrawWidgetType : uint8 {
    None,
    InGame,
    Menu,
    CutScene = 4,
    Movie = 8,
    Pause = 16,
    All = 255,
};

