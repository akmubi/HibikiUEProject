#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500ArmType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500ArmType : uint8 {
    Invalid,
    B_ARM,
    F_ARM,
    S_ARM,
};

