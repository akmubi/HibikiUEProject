#include "ArmFlamethrowerAreaDamageParma.h"

FArmFlamethrowerAreaDamageParma::FArmFlamethrowerAreaDamageParma() {
    this->DamageRadius = 0.00f;
    this->DamageHeight = 0.00f;
    this->DamageType = NULL;
    this->Particle = NULL;
    this->ParticleComponent = NULL;
    this->LastDamageTime = 0.00f;
    this->DamageIntervalTime = 0.00f;
    this->bHit = false;
    this->CenterOffset = FVector(0.0f);
    this->ParticleScale = FVector(0.0f);
}

