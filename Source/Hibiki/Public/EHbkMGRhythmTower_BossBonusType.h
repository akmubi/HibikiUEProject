#pragma once
#include "CoreMinimal.h"
#include "EHbkMGRhythmTower_BossBonusType.generated.h"

UENUM(BlueprintType)
enum class EHbkMGRhythmTower_BossBonusType : uint8 {
    QA_Phase1Clear,
    QA_Phase2Clear,
    QA_QTEClear,
    QA_BossClear,
    Rekka_Phase1Clear,
    Rekka_Phase2Clear,
    Rekka_Pipe,
    Rekka_BossClear,
    Mimosa_Phase1Clear,
    Mimosa_Phase2Clear,
    Mimosa_Phase3Clear,
    Mimosa_DanceJust,
    Mimosa_BossClear,
    Roquefort_Phase1Clear,
    Roquefort_Phase2Clear,
    Roquefort_Phase3Clear,
    Roquefort_Phase2TornadeClear,
    Roquefort_Phase3TornadeClear,
    Roquefort_BossClear,
    Kale_Phase1Clear,
    Kale_Phase1RhythmParry,
    Kale_Phase2Clear,
    Kale_KorsicaArm,
    Kale_PepperArm,
    Kale_MacaronArm,
    Kale_Phase3Clear,
    Kale_Phase3RhythmParry,
};

