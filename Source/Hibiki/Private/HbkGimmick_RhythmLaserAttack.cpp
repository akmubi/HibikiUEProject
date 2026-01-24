#include "HbkGimmick_RhythmLaserAttack.h"

FHbkGimmick_RhythmLaserAttack::FHbkGimmick_RhythmLaserAttack() {
    this->bRotate = false;
    this->RotateCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->bAttack = false;
    this->LaserAttackCapsuleRadius = 0.00f;
    this->LaserAttackCapsuleHalfHeight = 0.00f;
    this->LaserAttackDrawDebugType = EDrawDebugTrace::None;
}

