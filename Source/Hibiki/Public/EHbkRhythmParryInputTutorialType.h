#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmParryInputTutorialType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmParryInputTutorialType : uint8 {
    Parry,
    Dodge,
    ParryAndDodge,
};

