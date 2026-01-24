#include "HbkConeMeshComponent.h"

UHbkConeMeshComponent::UHbkConeMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConeAngle = 0.00f;
    this->ConeHeight = 0.00f;
}

void UHbkConeMeshComponent::UpdatePrimitive(float DeltaTime) {
}


