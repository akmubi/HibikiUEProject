#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerKeyInput.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerKeyInput : uint8 {
    Input_None,
    Input_Attack1,
    Input_Attack2,
    Input_Parry,
    Input_Dodge,
};

