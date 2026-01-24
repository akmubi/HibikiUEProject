#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAttackType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerAttackType : uint8 {
    None,
    Attack_Main,
    Attack_Second,
    Combo_Wait,
    Combo_Charge,
    Combo_Mash_Main,
    Combo_Mash_Second,
    Combo_BeatHitEnd,
    Combo_JamCombo,
};

