#include "HbkAnimNotifyState_RhythmAttack.h"

UHbkAnimNotifyState_RhythmAttack::UHbkAnimNotifyState_RhythmAttack() {
    this->AttackSocketName = TEXT("Origin");
    this->OverrideDamageType = NULL;
    this->bContinuousHit = false;
    this->bIsKorsicaWindAttack = false;
    this->KorsicaAttackVFX = NULL;
    this->bPermitSuccessVFX = false;
}


