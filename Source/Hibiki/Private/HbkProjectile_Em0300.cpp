#include "HbkProjectile_Em0300.h"

AHbkProjectile_Em0300::AHbkProjectile_Em0300(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereComponent = NULL;
    this->pBeginMoveHeightCurve = NULL;
    this->BeginMoveForwardMax = 500.00f;
    this->BeginMoveNoteCount = 4;
    this->ToExplosionStayCount = 0;
    this->AttachSocketNameOnPreLaunch = TEXT("launcher");
    this->AreaEffect = NULL;
    this->AreaEffect_LongNote = NULL;
    this->pExplosionParticle = NULL;
    this->pExplosionSE = NULL;
    this->pProjectileScalingCurve = NULL;
    this->ProjectileHalfSize = 0.00f;
    this->bIsPhysicsMove = false;
    this->OverrideGravity = 0.00f;
    this->TossForgroundLength = 300.00f;
    this->bDrawRecorder = false;
    this->ForecastLineScale = 5.00f;
}

void AHbkProjectile_Em0300::PerformAttack() {
}

void AHbkProjectile_Em0300::CancelAction() {
}


