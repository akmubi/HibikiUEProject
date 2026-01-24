#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerCameraShakeType : uint8 {
    None,
    AttackHit_S,
    AttackHit_M,
    AttackHit_L,
    Damage_S,
    Parry_S,
    MagnetHit_S,
};

