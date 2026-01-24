#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000ActionVoiceType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm2000ActionVoiceType : uint8 {
    ShortTackle,
    LongTackle,
    FistsDown,
    Punch,
    Drive,
    ElectricPunch,
    PipeJumpStart,
    PipeSlalom,
    Barrier,
    ElectricCharge,
    ElectricAttackBegin,
    DamagedThePlayer,
    RekkaDamagedForPhase1,
    RekkaDamagedForPhase3,
    CrashIntoTheWall,
    StartPhase4,
    GrapplingCatch,
    GrapplingShout,
    GrapplingSignature,
    PlayerElectricDamaged,
    PlayerGrapplingDamaged,
};

