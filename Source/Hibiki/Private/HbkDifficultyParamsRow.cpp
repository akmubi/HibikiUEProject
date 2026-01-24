#include "HbkDifficultyParamsRow.h"

FHbkDifficultyParamsRow::FHbkDifficultyParamsRow() {
    this->EnableAutoAction = false;
    this->EnemySetTblType = EHbkDifficultyEnemySetTblType::LessThanHard;
    this->RankTblType = EHbkDifficultyRankTblType::Easy;
    this->UseRecoveryAssist = false;
    this->rhythmType = EHbkDifficultyRhythmType::Easy;
    this->EnemyHPRate = 0.00f;
    this->EnemyToughRate = 0.00f;
    this->PlayerDamageRate = 0.00f;
}

