#include "HbkCoinBlockerComponent.h"

UHbkCoinBlockerComponent::UHbkCoinBlockerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ECC_CoinBlocker = ECC_GameTraceChannel15;
    this->CreatePresetCollisionOnBeginPlay = true;
}

bool UHbkCoinBlockerComponent::IsDebugCollisionDraw() const {
    return false;
}

void UHbkCoinBlockerComponent::DebugReset() {
}

void UHbkCoinBlockerComponent::DebugCollisionDrawOn() {
}

void UHbkCoinBlockerComponent::DebugCollisionDrawOff() {
}


