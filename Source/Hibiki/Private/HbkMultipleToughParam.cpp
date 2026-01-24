#include "HbkMultipleToughParam.h"

FHbkMultipleToughParam::FHbkMultipleToughParam() {
    this->DefaultToughValue = 0.00f;
    this->ToughValue = 0.00f;
    this->RecoveryToughByBeat = 0.00f;
    this->RecoveryToughValue = 0.00f;
    this->RecoveryBeginBeatCount = 0.00f;
    this->AdditionRecoveryBeginBeatCount = 0.00f;
    this->CurrentToughValue = 0.00f;
    this->RecoveryBeginTime = 0.00f;
    this->bIsTough = false;
    this->bIsToughRecoveryEnable = false;
    this->bIsNotifyDamage = false;
    this->bIsToughBreaked = false;
    this->bIsRecovery = false;
    this->bIsFirstRecoveryAfterBroken = false;
    this->DisableParticle = NULL;
    this->SE_OnDisable = NULL;
    this->DamageCauserDirection = FVector(0.0f);
}

