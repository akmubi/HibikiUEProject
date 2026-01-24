#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerHUDWidgetType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerHUDWidgetType : uint8 {
    None,
    HealthBar,
    SuccessWidget,
    SpecialAttackReady,
    ScreenDamageEffect,
    RhythmMeter,
    RhythmAssist,
    BossGauge,
    FightCutin,
    GetGear,
    BattleResult,
    BattleScore,
    ActionVoice,
    SpAttackSelect,
    FireExtinguish,
};

