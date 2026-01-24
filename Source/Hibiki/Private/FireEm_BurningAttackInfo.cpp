#include "FireEm_BurningAttackInfo.h"

FFireEm_BurningAttackInfo::FFireEm_BurningAttackInfo() {
    this->OverrideDamageType = NULL;
    this->bContinuousHit = false;
    this->LocationOffset = FVector(0.0f);
    this->RotationOffset = FRotator(0.0f);
}

