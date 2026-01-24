#include "HbkDamagePartsComponent.h"

UHbkDamagePartsComponent::UHbkDamagePartsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageParts = NULL;
}

bool UHbkDamagePartsComponent::RecoverBrokenPart(FName PartName, float RecoveryRate) {
    return false;
}

bool UHbkDamagePartsComponent::IsBrokenPart(FName PartName) const {
    return false;
}


