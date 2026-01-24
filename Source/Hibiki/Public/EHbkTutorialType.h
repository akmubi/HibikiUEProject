#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialType.generated.h"

UENUM(BlueprintType)
enum class EHbkTutorialType : uint8 {
    None,
    Combo_XXXX,
    Combo_YYY,
    Combo_XYY,
    Combo_YXX,
    Combo_X_BeatHit,
    Combo_Y_BeatHit,
};

