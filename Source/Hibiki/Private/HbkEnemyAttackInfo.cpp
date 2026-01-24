#include "HbkEnemyAttackInfo.h"

FHbkEnemyAttackInfo::FHbkEnemyAttackInfo() {
    this->RangeType = EHbkAttackRangeType::Range_None;
    this->SelectRate = 0.00f;
    this->QuarterNoteNum = 0;
    this->NoteLengthMin = EHbkNote::None;
    this->AttackAnim = NULL;
}

