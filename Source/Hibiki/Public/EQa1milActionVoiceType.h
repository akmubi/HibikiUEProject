#pragma once
#include "CoreMinimal.h"
#include "EQa1milActionVoiceType.generated.h"

UENUM(BlueprintType)
enum class EQa1milActionVoiceType : uint8 {
    BattleStart,
    Phase4Start,
    Charge,
    LaunchMissile,
    HandDown,
    QTESuccessFirst,
    QTEFailure,
    ContinuousPunch,
    Beam,
    AfterBeam,
    StagePunch,
    GaveDamage,
    GaveDamageSwing,
    QTESuccessSecond,
    QTEFailureMockery,
    CHAI_QTEStart,
    CHAI_GaveDamageSwing,
};

