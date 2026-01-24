#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerPassiveEffectType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerPassiveEffectType : uint8 {
    None,
    Recovery_SPA,
    AttackUp_SPA,
    Shield_SPA,
};

