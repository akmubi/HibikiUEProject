#include "HbkAttackBasicInfo.h"

FHbkAttackBasicInfo::FHbkAttackBasicInfo() {
    this->BaseNoteLength = EHbkNote::None;
    this->MinNoteLength = EHbkNote::None;
    this->NextNoteLength = EHbkNote::None;
    this->bIsNotSyncImpact = false;
    this->bIsNotSyncAnimation = false;
    this->bIsIrregularCalc = false;
    this->ReplaceAttackIndex = 0;
    this->AttackImpactNum = 0;
    this->AttackAnim = NULL;
    this->WeaponAnim = NULL;
}

