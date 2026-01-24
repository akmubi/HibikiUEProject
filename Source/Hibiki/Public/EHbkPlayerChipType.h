#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerChipType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerChipType : uint8 {
    None,
    RhythmMeterUp,
    RecoveryUp,
    BatteryUp,
    TakeAndGiveDamageUp,
    GearUp,
    DecreaseType,
    PartnerCoolTimeDown_P,
    PartnerCoolTimeDown_M,
    PartnerCoolTimeDown_K,
    IncreaseType,
    DirectionalParryInvincible,
    ComboDurationUp,
    P_DownTimeUp,
    K_FloatingTimeUp,
    K_DebuffTimeUp,
    SwitchType,
    ItemAbsorbCancelInBattle,
    ForceQuickCallPartner,
    FindingCircuit,
    ShowEnemyHealth,
    SpecialType,
    ParryRecovery,
    ParryBattery,
    DirectionalParryDamage,
    ItemAbsorbUp,
    P_ElectricEnemy,
    M_WaveRangeUp,
    M_LuckyShieldDamage,
};

