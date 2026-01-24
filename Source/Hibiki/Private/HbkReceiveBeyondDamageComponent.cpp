#include "HbkReceiveBeyondDamageComponent.h"

UHbkReceiveBeyondDamageComponent::UHbkReceiveBeyondDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnable = true;
    this->bIsBeyondDamage = false;
    this->ReceiveDamage = 0.00f;
    this->ReceiveDamageMax = 0.00f;
    this->bIsGraduallyRecover = false;
    this->GraduallyRecoverValue = 0.00f;
    this->GraduallyRecoverWaitTime = 0.00f;
    this->GraduallyRecoverWaitElapsedTime = 0.00f;
    this->bIsAutoReset = false;
    this->AutoResetTime = 0.00f;
    this->AutoResetElapsedTime = 0.00f;
}

void UHbkReceiveBeyondDamageComponent::SetEnable(bool Enable) {
}

void UHbkReceiveBeyondDamageComponent::Reset() {
}

bool UHbkReceiveBeyondDamageComponent::IsBeyondDamage() {
    return false;
}

void UHbkReceiveBeyondDamageComponent::ForceBeyondDamage() {
}


