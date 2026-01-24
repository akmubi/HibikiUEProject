#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeColorFilterType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModeColorFilterType : uint8 {
    SepiaTone,
    GreenTone,
    PurpleTone,
    BlueTone,
    RedTone,
    YellowTone,
    Monotone,
    Vintage,
    HighContrast,
    GradationReduction,
    Num,
};

