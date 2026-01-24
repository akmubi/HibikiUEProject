#include "HbkGimmick_BreakChara.h"

AHbkGimmick_BreakChara::AHbkGimmick_BreakChara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StopVelocity = 0.00f;
}

void AHbkGimmick_BreakChara::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_BreakChara::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


