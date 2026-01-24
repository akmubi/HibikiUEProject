#pragma once
#include "CoreMinimal.h"
#include "EHbkSpectraBattleConditionType.generated.h"

UENUM(BlueprintType)
enum class EHbkSpectraBattleConditionType : uint8 {
    NoteCount,
    AirBattle,
    AirBattleReset,
    ParryCounter,
    DodgeCounter,
    OverKill,
    NotMove,
    NoDamage,
    JustTiming,
    ParryDamage,
};

