#include "EnemyRhythmDodgePlayerActionInfo.h"

FEnemyRhythmDodgePlayerActionInfo::FEnemyRhythmDodgePlayerActionInfo() {
    this->bIsRhythmDodge = false;
    this->PlayerMoveAction = NULL;
    this->PlayerDamageAction = NULL;
    this->ActionTimeByNote = EHbkNote::None;
    this->ActionRotationZDegree = 0.00f;
    this->ActionMoveVector = FVector(0.0f);
}

