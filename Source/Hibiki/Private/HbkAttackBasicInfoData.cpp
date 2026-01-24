#include "HbkAttackBasicInfoData.h"

FHbkAttackBasicInfoData::FHbkAttackBasicInfoData() {
    this->BaseNoteLength = EHbkNote::None;
    this->MinNoteLength = EHbkNote::None;
    this->NextNoteLength = EHbkNote::None;
    this->bIsNotSyncImpact = false;
    this->bIsNotSyncAnimation = false;
    this->bIsIrregularCalc = false;
    this->AttackImpactNum = 0;
    this->AttackAnim = NULL;
    this->WeaponAnim = NULL;
}

