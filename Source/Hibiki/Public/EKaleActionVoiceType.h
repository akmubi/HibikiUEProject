#pragma once
#include "CoreMinimal.h"
#include "EKaleActionVoiceType.generated.h"

UENUM(BlueprintType)
enum class EKaleActionVoiceType : uint8 {
    INVALID,
    KAL_HelmDivideSlash_Phase1_Jump,
    KAL_MultiSlash_Start,
    KAL_DownRecovery_Start_Phase1,
    KAL_DownRecovery_Start_Phase3,
    KAL_Appeal_Start,
    KAL_808PhaseAttack_State1,
    KAL_808PhaseAttack_State2,
    KAL_808QTE_Success,
    KAL_808QTE_Failure,
    KAL_EnergySwordGazer_Charge,
    KAL_ShotFourCombi_Notice,
    KAL_ParryCounterSlash_GiveDamage,
    KAL_ParryCounterSlash_TakeParry,
    KAL_SArm_Attack,
    KAL_SArm_BlockedCounter,
    KAL_BArm_DicideLaunchLaser,
    KAL_FArm_ReadyFire,
    KAL_ArmDown_Start,
    KAL_ArmDownRecovery_NotBreak,
    KAL_GroundSlash_Phase3,
    KAL_HelmDivideSlash_Phase3_Jump,
    KAL_LightningSlash_Receive,
    CHA_KaleArmBreak_First,
    CHA_KaleArmBreak_Second,
    PEP_808TakeDamage_0,
    PEP_808TakeDamage_1,
    MAC_808TakeDamage_0,
    MAC_808TakeDamage_1,
    KOR_808TakeDamage_0,
    KOR_808TakeDamage_1,
};

