#include "HbkToughComponent.h"

UHbkToughComponent::UHbkToughComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultToughValue = 5.00f;
    this->RecoveryToughByBeat = 1.00f;
    this->RecoveryBeginBeatCount = 4.00f;
    this->bIsToughRecoveryAfterBreak = true;
    this->bIsToughEnable = true;
    this->ToughDamageRate = 1.00f;
}

void UHbkToughComponent::ToughDisable() {
}

void UHbkToughComponent::SetToughRecoveryEnable(bool Enable) {
}

void UHbkToughComponent::SetToughRecoveryAfterBreak(bool Enable) {
}

void UHbkToughComponent::SetToughLevel(int32 NewToughLevel) {
}

void UHbkToughComponent::SetToughEnable(bool IsToughEnable) {
}

void UHbkToughComponent::RecoveryToughFull() {
}

bool UHbkToughComponent::IsToughRecovery() const {
    return false;
}

bool UHbkToughComponent::IsTough() {
    return false;
}

bool UHbkToughComponent::IsKorsicaWindDamaged() {
    return false;
}

int32 UHbkToughComponent::GetToughLevel() const {
    return 0;
}

void UHbkToughComponent::ForceToughDisable() {
}


