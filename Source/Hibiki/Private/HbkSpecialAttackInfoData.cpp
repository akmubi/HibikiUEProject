#include "HbkSpecialAttackInfoData.h"

FHbkSpecialAttackInfoData::FHbkSpecialAttackInfoData() {
    this->GaugeCost = 0;
    this->bIsIncludingCamera = false;
    this->bIsAirSpAttack = false;
    this->bCheckAdjustLocationWithBoss = false;
    this->bAbortSPAWhenEndCombat = false;
    this->bAddScoreBonusTime = false;
    this->bIgnoreTargetCameraBlock = false;
    this->TargetSelectType = EHbkSpecialAttackTargetSelectType::Normal;
    this->CheckAdjustLocationDistance = 0.00f;
    this->CheckAdjustDirectionYaw = 0.00f;
    this->PartnerType = EHbkPartnerType::None;
    this->RhythmScore = NULL;
    this->ScoreRateForBest = 0.00f;
    this->ScoreRateForGood = 0.00f;
    this->bEnableSlowEffect = false;
    this->bEnableBranchBySuccess = false;
    this->bEnableBranchByFailed = false;
    this->AnimCameraStopTimeByFailed = 0.00f;
    this->bDelayBeginRhythmGame = false;
    this->bGenerateAdditionalActor = false;
    this->bDestroyAdditionalActor = false;
    this->bSettingAllTarget = false;
    this->bOnlyOneGenerate = false;
    this->PassiveEffectNoteCount = 0;
    this->BestPassiveEffectNoteCount = 0;
    this->bContinuousSPA = false;
    this->ConsumeNoteCount = 0;
    this->bCanAbortSPA = false;
    this->StartingOffsetVector = FVector(0.0f);
}

