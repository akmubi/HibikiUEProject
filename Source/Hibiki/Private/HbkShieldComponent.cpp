#include "HbkShieldComponent.h"

UHbkShieldComponent::UHbkShieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBlock = true;
    this->DurableValue = 100.00f;
    this->BlockableYawRange = 360.00f;
    this->BlockSE = NULL;
    this->BreakSE = NULL;
    this->BreakVfx = NULL;
    this->bIsMultiZoneBlock = false;
    this->bIsForceBlock = false;
}

void UHbkShieldComponent::SetInvincible(const bool NewInvincible) {
}

void UHbkShieldComponent::SetDurableValue(float Value) {
}

void UHbkShieldComponent::SetCanBlockFlag(bool NewFlag) {
}

bool UHbkShieldComponent::IsBroken() const {
    return false;
}

bool UHbkShieldComponent::isBlocked() const {
    return false;
}

bool UHbkShieldComponent::GetInvincible() const {
    return false;
}

float UHbkShieldComponent::GetDurableValueMax() const {
    return 0.0f;
}

float UHbkShieldComponent::GetDurableValue() const {
    return 0.0f;
}

float UHbkShieldComponent::GetCurrentDamageValue() {
    return 0.0f;
}

bool UHbkShieldComponent::ForceBreakShield() {
    return false;
}

bool UHbkShieldComponent::ChallengeDamageBlock(AActor* DamageCauser, const UDamageType* DamageType, float DamageValue) {
    return false;
}

bool UHbkShieldComponent::CanBlock() const {
    return false;
}


