#include "HbkHologramComponent.h"

UHbkHologramComponent::UHbkHologramComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HologramMI = NULL;
    this->HologramMID = NULL;
}

void UHbkHologramComponent::HologramEnable() {
}

void UHbkHologramComponent::HologramDisable() {
}

void UHbkHologramComponent::AddTargetMesh(TArray<UMeshComponent*> TargetMeshList) {
}


