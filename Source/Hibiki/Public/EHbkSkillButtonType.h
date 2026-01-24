#pragma once
#include "CoreMinimal.h"
#include "EHbkSkillButtonType.generated.h"

UENUM(BlueprintType)
enum class EHbkSkillButtonType : uint8 {
    None,
    Button_X,
    Button_Y,
    Button_Rest,
    Button_RB_X,
    Button_RB_Y,
    Button_RB,
};

