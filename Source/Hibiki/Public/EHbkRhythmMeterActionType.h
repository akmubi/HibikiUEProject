#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmMeterActionType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmMeterActionType : uint8 {
    None,
    Hit_Attack,
    Hit_BeatHit,
    Parry,
    JustDodge,
    Damage,
    JamComboAttack,
    JustInput,
    JustInput_Attack,
    JustInput_Dodge,
    JustInput_Partner,
};

