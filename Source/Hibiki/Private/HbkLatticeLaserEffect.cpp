#include "HbkLatticeLaserEffect.h"

FHbkLatticeLaserEffect::FHbkLatticeLaserEffect() {
    this->Type = EHbkLatticeLaserType::None;
    this->bIsThick = false;
    this->ParticleSystemComponentForStart = NULL;
    this->ParticleSystemComponentForVisible = NULL;
    this->ParticleSystemComponentForEnd = NULL;
    this->StartWorldLocation = FVector(0.0f);
    this->EndWorldLocation = FVector(0.0f);
}

