#include "HbkAnimNotifyState_MoveAttack.h"

UHbkAnimNotifyState_MoveAttack::UHbkAnimNotifyState_MoveAttack() {
    this->AttackStartSocketName = TEXT("Origin");
    this->DamageType = NULL;
    this->bContinuousHit = false;
    this->bIsUseFollowParticle = false;
    this->bIsAdjustPlayTimeToBPM = false;
    this->bIsRegisterAbortPSCEvent = true;
    this->bIsCallParticleDeactivateOnEnd = false;
    this->FollowParticle = NULL;
}


