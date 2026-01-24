#include "HbkDamageReserveParam.h"

FHbkDamageReserveParam::FHbkDamageReserveParam() {
    this->bIsDamageTiming = false;
    this->bIsDamageBlock = false;
    this->bIsDamageDodge = false;
    this->bIsDamageGuard = false;
    this->BasisDamage = 0.00f;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->InstigatedBy = NULL;
    this->bPointDamage = false;
    this->bApplyDiffParam = false;
    this->EnableTimer = 0.00f;
    this->DamageImpulse = FVector(0.0f);
}

