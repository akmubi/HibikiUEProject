#include "HbkEnemyVisualizeStateComponent.h"

UHbkEnemyVisualizeStateComponent::UHbkEnemyVisualizeStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayingOverkillVFX = NULL;
    this->PlayingToughVFX = NULL;
    this->bUseText = true;
    this->TextHeightOffset = 100.00f;
}

void UHbkEnemyVisualizeStateComponent::OnToughDeactive() {
}

void UHbkEnemyVisualizeStateComponent::OnToughActive() {
}

void UHbkEnemyVisualizeStateComponent::OnOverKill() {
}


