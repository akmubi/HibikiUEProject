#include "HbkBossMissile.h"

AHbkBossMissile::AHbkBossMissile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HomingSpeed = 0.00f;
    this->MoveEffect = NULL;
    this->AimEffect = NULL;
}

void AHbkBossMissile::OnAbortProjectileEvent() {
}


