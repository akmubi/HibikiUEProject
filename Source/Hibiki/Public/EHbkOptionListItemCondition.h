#pragma once
#include "CoreMinimal.h"
#include "EHbkOptionListItemCondition.generated.h"

UENUM()
enum class EHbkOptionListItemCondition {
    None,
    PlatformAll,
    PlatformPC,
    PlatformXSX = 4,
    PlatformXSS = 8,
    PlatformPS5 = 16,
    InMenuLevel = 1024,
    InGameLevel = 2048,
    ChangeableDifficultyLevel = 4096,
    ExcludeInPIE = 8192,
    DifficultyBelowNormal = 16384,
    ExcludeInSpectraBattle = 32768,
    ExcludeInRhythmGame = 65536,
    DispDifficultyLevel = 131072,
    ReflexSupport = 16777216,
    DevWorkInProgress = 1073741824,
};

