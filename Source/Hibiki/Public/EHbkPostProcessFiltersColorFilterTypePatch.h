#pragma once
#include "CoreMinimal.h"
#include "EHbkPostProcessFiltersColorFilterTypePatch.generated.h"

UENUM(BlueprintType)
enum class EHbkPostProcessFiltersColorFilterTypePatch : uint8 {
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

