#include "HbkProjectile_Em0801.h"

AHbkProjectile_Em0801::AHbkProjectile_Em0801(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackableRangeMin = 300.00f;
    this->AttackableRangeMax = 2000.00f;
    this->pVFX_LandingHit = NULL;
    this->pVFX_LandingLine = NULL;
    this->pVFX_LandingPoint = NULL;
    this->pSE_OnHit = NULL;
}


