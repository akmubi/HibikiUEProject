#include "HbkGimmick_ElectricTrap.h"

AHbkGimmick_ElectricTrap::AHbkGimmick_ElectricTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bAppear = false;
    this->AppearCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->SafeCount = 4;
    this->SignAttackCount = 1;
    this->SignAttackNum = 4;
    this->AttackCount = 3;
    this->bExecSave = true;
    this->bSaved = false;
    this->bActive = false;
}


