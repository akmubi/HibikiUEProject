#include "HbkGimmick_bg1140.h"

AHbkGimmick_bg1140::AHbkGimmick_bg1140(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bEndAnim = false;
}

void AHbkGimmick_bg1140::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& HitResult, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_bg1140::OnEndAnim() {
}

void AHbkGimmick_bg1140::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


