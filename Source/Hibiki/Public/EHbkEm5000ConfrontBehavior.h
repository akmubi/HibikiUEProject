#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000ConfrontBehavior.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000ConfrontBehavior : uint8 {
    None,
    StyleSkirt,
    StyleWings,
    EvasionAttack,
};

