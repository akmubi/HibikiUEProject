#include "HbkPlayerSpringArmComponent.h"

UHbkPlayerSpringArmComponent::UHbkPlayerSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableCameraLag = true;
    this->bUseCameraLagSubstepping = false;
    this->bLagFixedXYLocation = false;
}


