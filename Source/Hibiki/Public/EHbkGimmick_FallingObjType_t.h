#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_FallingObjType_t.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_FallingObjType_t : uint8 {
    FOT_NONE,
    FOT_CENTER,
    FOT_RIGHT,
    FOT_LEFT,
};

