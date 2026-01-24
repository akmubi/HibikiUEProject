#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerControlMode.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerControlMode : uint8 {
    None,
    Normal,
    Second_Charging,
    BuringDamage,
    RhythmParry,
    MagnetRail,
    Control2D,
    MiniGame_Rekka,
    MiniGame_Roquefort_Phase2,
    MiniGame_Roquefort_Phase3,
    MiniGame_Rhythm,
    MiniGame_Rhythm_Barrier,
    MiniGame_Partner,
    MiniGame_Partner_Korsica,
    RhythmParry_Korsica,
    RhythmParry_Mimosa,
    RhythmParry_Kale1,
    RhythmParry_Kale3,
    SimpleRhythmParry,
    ST01_SpecialAttackTutorial,
    ST03_ParryTutorial,
    ST04_SlideBLDG,
    ST08_MimosaDance,
    ST12_LastQTE,
    MagnetEventQTE,
    Control_ChaiCosSp02,
    Control_808,
    Control_808_QTE,
    Control_CNMN,
    Control_AzitoPlayer,
};

