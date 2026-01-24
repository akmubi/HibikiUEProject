#include "HbkProjectile_Em0650Wing.h"

AHbkProjectile_Em0650Wing::AHbkProjectile_Em0650Wing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineTraceDistance = 5000.00f;
    this->MinDistanceFromOwner = 200.00f;
    this->EnabledAdditiveDiffDistanceFromOwner = 750.00f;
    this->pMoveCurve = NULL;
    this->pExplosionParticle = NULL;
    this->ExplosionEffectScale = 1.00f;
    this->ShootLineEffect = NULL;
    this->pExplosionSE = NULL;
    this->pOnLandingSE = NULL;
}


