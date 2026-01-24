#include "HbkDamageParam.h"

FHbkDamageParam::FHbkDamageParam() {
    this->DamageReactScale = 0.00f;
    this->bIsDead = false;
    this->AnimPlayRateOverride = 0.00f;
    this->FlightDuration = 0.00f;
    this->DownStateTime = 0.00f;
    this->WindStunTime = 0.00f;
    this->bIsInstantKill = false;
    this->DamageCauserDirection = FVector(0.0f);
}

