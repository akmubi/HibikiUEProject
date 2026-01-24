#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000ActionVoiceType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000ActionVoiceType : uint8 {
    StartOfTheAttack,
    StartOfTheAttackForPhase3,
    AttackHits,
    EvationAttackHits,
    GuardBreak,
    GuardBreakForPhase3,
    RecoveryFromDownState,
    SaberInTheDark,
    SideStory,
    SoundBlasterFestival,
    MimosaSlap,
    RestOfGuardIsTwoThird,
    RestOfGuardIsHalf,
    AfterTheChaiReceivesMimosaSlap,
    FailureInDanceBattle,
    SuccessInDanceBattle,
    GuardFullRecoveredInTime,
};

