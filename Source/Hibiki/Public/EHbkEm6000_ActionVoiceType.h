#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_ActionVoiceType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_ActionVoiceType : uint8 {
    INVALID,
    AttackSignForWolf,
    PrepareMiniGameInPhase2_1,
    PrepareMiniGameInPhase3_2,
    MoveAfterHitForWolf,
    RollingForHuman,
    DamagedForHuman,
    DizzyForWolf,
    PantingForWolf,
    RecoveryForWolf,
    BlowingAwayInPhase2_1,
    HighFiveInPhase2_1,
    WaitKorsicaInPhase2_1,
    EntryKorsicaInPhase3_2,
};

