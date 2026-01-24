#pragma once
#include "CoreMinimal.h"
#include "EKaleHintTalkType.generated.h"

UENUM(BlueprintType)
enum class EKaleHintTalkType : uint8 {
    INVALID,
    P1_StartRhythmParry_First,
    P1_ResetRhythmParry_First,
    P1_ResetRhythmParry_Second,
    P2_SArm_StingGround_First,
    P2_SArm_Down_First,
    P2_BArm_SpawnBarrier_First,
    P2_BArm_Down_First,
    P2_FArm_SpawnFire_First,
    P2_FArm_Down_First,
    P3_StartRhythmParry_First,
    P3_ResetRhythmParry_First,
    P3_ResetRhythmParry_Second,
    P808_GameOver_0,
    P808_GameOver_1,
    P1_GameOver_0,
    P1_GameOver_1,
    P2_GameOver_0,
    P2_GameOver_1,
    P3_GameOver_0,
    P3_GameOver_1,
};

