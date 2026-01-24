#pragma once
#include "CoreMinimal.h"
#include "EHbkComboType.generated.h"

UENUM(BlueprintType)
enum class EHbkComboType : uint8 {
    None,
    XXXX_beathit,
    X_rest_XX,
    YYY_beathit,
    air_XXXX_beathit,
    air_Y,
    XYY_beathit,
    YXX_beathit,
    XX_rest_XXX_beathit,
    XY_repeat_beathit,
    XYXXX_beathit,
    YXY_beathit,
    X_plusA_beathit,
    air_XYYY_beathit,
    Y_hold,
    XXX_Not_beathit,
    XXXX_Not_beathit,
    YYY_Not_beathit,
    Dash_X,
    Dash_Y,
    AnyBeatHit,
};

