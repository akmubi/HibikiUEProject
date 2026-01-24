#include "HbkAnimNotifyState_Attack2.h"

UHbkAnimNotifyState_Attack2::UHbkAnimNotifyState_Attack2() {
    this->AttackSocketName = TEXT("Origin");
    this->OverrideDamageType = NULL;
    this->bContinuousHit = false;
    this->ContinuousHitInterval = EHbkNote::Note_16th;
}


