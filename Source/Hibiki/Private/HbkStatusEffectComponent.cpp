#include "HbkStatusEffectComponent.h"

UHbkStatusEffectComponent::UHbkStatusEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkStatusEffectComponent::SetEffectiveTimeEternalEnabled(FGameplayTag InStatusEffectTag, bool IsEternal) {
}

void UHbkStatusEffectComponent::SetEffectiveTime(FGameplayTag StatusEffectTag, float NewTime) {
}

void UHbkStatusEffectComponent::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool UHbkStatusEffectComponent::IsStatusEffective(FGameplayTag StatusEffectTag) {
    return false;
}

void UHbkStatusEffectComponent::DeactivateStatusEffect(FGameplayTag StatusEffectTag) {
}

void UHbkStatusEffectComponent::ActivateStatusEffect(FGameplayTag StatusEffectTag) {
}


