#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_LightEmissiveKindType_t.generated.h"

UENUM(BlueprintType)
enum EHbkGimmick_LightEmissiveKindType_t {
    LE_TYPE_CIRCLE,
    LE_TYPE_CIRCLE_B,
    LE_TYPE_SIMPLE_A,
    LE_TYPE_SQUARE,
    LE_TYPE_WARNING,
    LE_TYPE_GENERATOR,
    LE_TYPE_DOOR_BOARD,
    LE_TYPE_DOOR_BOARD_B,
    LE_TYPE_DOOR_BOARD_C,
    LE_TYPE_GENERATOR_SIGN_KORSICA,
    LE_TYPE_EMI_MAX UMETA(Hidden),
};

