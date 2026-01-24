#include "HbkPlayerCostumeComponent.h"

UHbkPlayerCostumeComponent::UHbkPlayerCostumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharredMaterial = NULL;
}

void UHbkPlayerCostumeComponent::RevertCharredMaterial() {
}

bool UHbkPlayerCostumeComponent::ReplaceCharredMaterial() {
    return false;
}

void UHbkPlayerCostumeComponent::OnPostInitializedCostumeComponent() {
}


