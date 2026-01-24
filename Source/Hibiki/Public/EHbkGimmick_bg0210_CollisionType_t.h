#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0210_CollisionType_t.generated.h"

UENUM(BlueprintType)
enum EHbkGimmick_bg0210_CollisionType_t {
    BG0210_COL_NONE,
    BG0210_COL_OBJ_RIGHT,
    BG0210_COL_OBJ_LEFT,
    BG0210_COL_HANDRAIL_RIGHT,
    BG0210_COL_HANDRAIL_LEFT,
    BG0210_COL_BRIDGE,
};

