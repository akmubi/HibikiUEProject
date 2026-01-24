#pragma once
#include "CoreMinimal.h"
#include "ECentaur_SpearAttackType.generated.h"

UENUM(BlueprintType)
enum class ECentaur_SpearAttackType : uint8 {
    None,
    Stab1,
    Stab3,
    Jump,
    Spin,
};

