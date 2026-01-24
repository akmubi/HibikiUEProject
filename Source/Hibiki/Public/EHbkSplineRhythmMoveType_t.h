#pragma once
#include "CoreMinimal.h"
#include "EHbkSplineRhythmMoveType_t.generated.h"

UENUM(BlueprintType)
enum EHbkSplineRhythmMoveType_t {
    SRTYPE_RHYTHMNONE,
    SRTYPE_1MOVE0WAIT,
    SRTYPE_1MOVE1WAIT,
    SRTYPE_1MOVE3WAIT,
    SRTYPE_2MOVE2WAIT,
    SRTYPE_3MOVE1WAIT,
    SRTYPE_6WAIT2MOVE,
    SRTYPE_10WAIT2MOVE,
    SRTYPE_CUSTOM,
};

