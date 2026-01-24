#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerAttackType.generated.h"

UENUM(BlueprintType)
enum class EHbkPartnerAttackType : uint8 {
    None,
    Light_Normal,
    Light_ForGimmick,
    Light_Dodge,
    Light_Parry,
    Heavy_BeatHit,
    Heavy_BeatHitAir,
    Heavy_Charge,
    EX_SpecialAttack,
};

