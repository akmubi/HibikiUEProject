#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_LightEmissiveColorType_t.generated.h"

UENUM(BlueprintType)
enum EHbkGimmick_LightEmissiveColorType_t {
    LE_TYPE_GRAY,
    LE_TYPE_WHITE,
    LE_TYPE_RED,
    LE_TYPE_CHG_RED,
    LE_TYPE_GREEN,
    LE_TYPE_YELLOW,
    LE_TYPE_PURPLE,
    LE_TYPE_BLUE,
    LE_TYPE_COLOR_MAX UMETA(Hidden),
};

