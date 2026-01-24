#include "HbkGimmick_CNMNDisplay.h"

AHbkGimmick_CNMNDisplay::AHbkGimmick_CNMNDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_CNMNDisplay::TalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkGimmick_CNMNDisplay::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_CNMNDisplay::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


