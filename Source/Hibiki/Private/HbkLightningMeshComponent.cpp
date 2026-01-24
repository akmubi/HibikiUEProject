#include "HbkLightningMeshComponent.h"

UHbkLightningMeshComponent::UHbkLightningMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->CastShadow = false;
    this->OverrideMaterials.AddDefaulted(1);
}


