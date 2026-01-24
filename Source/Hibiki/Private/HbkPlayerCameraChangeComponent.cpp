#include "HbkPlayerCameraChangeComponent.h"

UHbkPlayerCameraChangeComponent::UHbkPlayerCameraChangeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendTime = 0.00f;
    this->bDisableBattleForwardCamera = false;
    this->bDisableFocalPointTrace = false;
}

void UHbkPlayerCameraChangeComponent::ResetCamera() {
}

void UHbkPlayerCameraChangeComponent::ChangePlayerCameraWithName(FName CameraName) {
}

void UHbkPlayerCameraChangeComponent::ChangePlayerCamera() {
}


