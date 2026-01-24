#include "HbkMaterialBeatChangerComponent.h"

UHbkMaterialBeatChangerComponent::UHbkMaterialBeatChangerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBindToDamageComponentDelegate = false;
}

void UHbkMaterialBeatChangerComponent::Receive_OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


