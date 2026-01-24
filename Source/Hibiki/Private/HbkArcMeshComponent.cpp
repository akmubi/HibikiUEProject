#include "HbkArcMeshComponent.h"

UHbkArcMeshComponent::UHbkArcMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArcAngle = 0.00f;
    this->ArcRadius = 0.00f;
}

void UHbkArcMeshComponent::UpdatePrimitive(float DeltaTime) {
}


