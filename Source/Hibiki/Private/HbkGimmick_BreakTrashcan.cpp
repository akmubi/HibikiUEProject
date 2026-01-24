#include "HbkGimmick_BreakTrashcan.h"

AHbkGimmick_BreakTrashcan::AHbkGimmick_BreakTrashcan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxTime = 0.00f;
    this->pHitTrashVFX = NULL;
    this->pBreakTrashVFX = NULL;
}

void AHbkGimmick_BreakTrashcan::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_BreakTrashcan::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


