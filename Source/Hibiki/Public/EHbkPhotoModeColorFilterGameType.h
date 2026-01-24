#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeColorFilterGameType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModeColorFilterGameType : uint8 {
    None,
    SepiaTone,
    GreenTone,
    PurpleTone,
    BlueTone,
    RedTone,
    YellowTone,
    Monotone,
    Vintage,
    HighContrast,
    Num,
};

