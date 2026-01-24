#pragma once
#include "CoreMinimal.h"
#include "EHbkBeatHitEffectType.generated.h"

UENUM(BlueprintType)
enum class EHbkBeatHitEffectType : uint8 {
    None,
    AddAttack,
    WholeAttack,
    Recovery,
    Notify,
    External_Attack,
};

