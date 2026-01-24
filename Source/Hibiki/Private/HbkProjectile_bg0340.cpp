#include "HbkProjectile_bg0340.h"

AHbkProjectile_bg0340::AHbkProjectile_bg0340(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pExplosionParticle = NULL;
    this->pExplosionSE = NULL;
    this->pBoundingSE = NULL;
    this->AreaVFX = NULL;
    this->TossToFirstBoundNoteCount = 0;
    this->BoundNoteCount = 1;
    this->AdditiveHeight = 100.00f;
    this->MeshHeightOffset = 0.00f;
    this->TraceType = TraceTypeQuery1;
    this->ForecastLineScale = 5.00f;
}

void AHbkProjectile_bg0340::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkProjectile_bg0340::OnDamagedByLaunchOwner(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}


