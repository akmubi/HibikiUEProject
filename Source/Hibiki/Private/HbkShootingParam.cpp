#include "HbkShootingParam.h"

FHbkShootingParam::FHbkShootingParam() {
    this->bIsAirShooting = false;
    this->bIsAirShootingManual = false;
    this->bAttackAirTarget = false;
    this->bIsRotationYaw = false;
    this->DamageType = NULL;
    this->ShootLineEffect = NULL;
    this->ShootChargingEffect = NULL;
    this->ShootEffect = NULL;
    this->bIsShootLineEffectTypeByStep = false;
    this->ChargePrgSE = NULL;
    this->ShootPrepareSE = NULL;
    this->ShootChargingSE = NULL;
    this->ShootingSE = NULL;
    this->ChargeNoteCount = 0;
    this->NextShootFraction = 0.00f;
    this->NextTimeCount = 0;
    this->bUse16thBeatCharge = false;
    this->Charge16thCount = 0;
    this->bUseOriginalStartPosition = false;
    this->AngleLimit = 0.00f;
}

