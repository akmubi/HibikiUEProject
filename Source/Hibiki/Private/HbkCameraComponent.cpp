#include "HbkCameraComponent.h"

UHbkCameraComponent::UHbkCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainAspectRatio = true;
}

void UHbkCameraComponent::SetFocalActor(AActor* NewForcalActor, const FVector& InOffsetPivotPoint, APlayerController* FollowToPlayer, bool UseFocalPointLocation) {
}

void UHbkCameraComponent::SetCameraRigRail(AHbkCameraRig_Rail* NewCameraRigRail, APlayerController* FollowToPlayer) {
}

void UHbkCameraComponent::SetCameraAzito(AHbkAzitoActor* NewCameraAzito, APlayerController* FollowToPlayer) {
}

void UHbkCameraComponent::NotifyCameraCut() {
}


