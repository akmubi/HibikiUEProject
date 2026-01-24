#include "HbkSmearSkeletalMeshComponent.h"

UHbkSmearSkeletalMeshComponent::UHbkSmearSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayFrame = 10;
    this->MeshComponent = NULL;
}


