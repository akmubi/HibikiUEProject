#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerRestrictionFlag.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerRestrictionFlag : uint8 {
    None,
    RhythmFamiliar,
    BeatHit,
    AirDash = 4,
    Parry = 8,
    Magnet = 16,
    SPAttack = 32,
    CharacterChange = 128,
    VS_St01Start = 179,
    VC_TutorialStart = 144,
    All = 255,
};

