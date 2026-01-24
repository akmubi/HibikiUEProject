#include "HbkProjectile_Em0601.h"

AHbkProjectile_Em0601::AHbkProjectile_Em0601(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereComponent = NULL;
    this->bEnableBound = false;
    this->pBeginMoveHeightCurve = NULL;
    this->pBoundingHeightCurve = NULL;
    this->BeginMoveForwardMax = 500.00f;
    this->BeginMoveNoteCount = 0;
    this->BoundCount = 0;
    this->BoundingHeight = 200.00f;
    this->ToExplosionCount = 0;
    this->AreaEffect = NULL;
    this->AreaEffect_LongNote = NULL;
    this->pExplosionParticle = NULL;
    this->pExplosionSE = NULL;
    this->pBoundingSE = NULL;
    this->ProjectileHalfSize = 0.00f;
    this->bIsPhysicsMove = false;
    this->OverrideGravity = 0.00f;
    this->TossForgroundLength = 300.00f;
    this->ForecastLineScale = 5.00f;
}

void AHbkProjectile_Em0601::Receive_OnAbortAttackState(AHbkEnemyCharacter* EmPawn, AHbkEnemyAIController* EmAI) {
}

void AHbkProjectile_Em0601::CancelAction() {
}


