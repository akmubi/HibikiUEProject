#include "HbkBossBeChasedComponent.h"

UHbkBossBeChasedComponent::UHbkBossBeChasedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCheckBeingChased = false;
    this->bIsBeChasedLimit = false;
    this->BeChasedTime = 0.00f;
    this->BeChasedLimitResetTime = 0.00f;
}

void UHbkBossBeChasedComponent::TestDeactivate() {
}

void UHbkBossBeChasedComponent::TestActivate() {
}

void UHbkBossBeChasedComponent::Reset() {
}

bool UHbkBossBeChasedComponent::IsLimit() const {
    return false;
}

void UHbkBossBeChasedComponent::Initialize(const FHbkBossBeChasedInitParam& InInitParam) {
}

void UHbkBossBeChasedComponent::Deactive() {
}

void UHbkBossBeChasedComponent::Active() {
}


