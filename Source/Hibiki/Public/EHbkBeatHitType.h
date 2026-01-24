#pragma once
#include "CoreMinimal.h"
#include "EHbkBeatHitType.generated.h"

UENUM(BlueprintType)
enum class EHbkBeatHitType : uint8 {
    None,
    ComboFinish,
    SpecialRhythmAttack,
    PartnerCounter,
    RhythmParryForEnemy,
    MiniGame,
    MagnetRailQTE,
    MagnetRailQTE_ForEnemy,
    KorsicaQTE,
    XButtonQTE,
    TreasureBoxQTE,
    KaleQTE,
};

