#include "HbkGimmick_BreakDrum.h"

AHbkGimmick_BreakDrum::AHbkGimmick_BreakDrum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pBreakMesh = NULL;
    this->StartDitherTime = 0.00f;
    this->DitherTimeToDisappear = 0.00f;
    this->Explosion = false;
    this->AttackTime = 0.00f;
    this->impulseScale = 1.00f;
}

void AHbkGimmick_BreakDrum::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_BreakDrum::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


