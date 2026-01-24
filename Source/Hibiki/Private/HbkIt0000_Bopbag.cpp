#include "HbkIt0000_Bopbag.h"

AHbkIt0000_Bopbag::AHbkIt0000_Bopbag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitHidden = false;
}

void AHbkIt0000_Bopbag::Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkIt0000_Bopbag::Receive_DamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}






