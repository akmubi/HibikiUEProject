#include "HbkDecalComponent.h"

UHbkDecalComponent::UHbkDecalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideBaseColorTint = false;
    this->bOverrideOpacity = false;
    this->Opacity = 1.00f;
    this->DefaultMaterial = NULL;
}


