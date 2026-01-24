#include "HbkBoxMeshComponent.h"

UHbkBoxMeshComponent::UHbkBoxMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PivotType = EHbkBoxMeshPivotType::Center;
}

void UHbkBoxMeshComponent::UpdatePrimitive(float DeltaTime) {
}


