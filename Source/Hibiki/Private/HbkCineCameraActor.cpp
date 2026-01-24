#include "HbkCineCameraActor.h"
#include "HbkCineCameraComponent.h"

AHbkCineCameraActor::AHbkCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkCineCameraComponent>(TEXT("CameraComponent"))) {
    this->CinemaCameraInterp = 1.00f;
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

void AHbkCineCameraActor::SetCinemaCameraInterp(float Interp) {
}

void AHbkCineCameraActor::ResetPlayerCameraRotation(bool bYaw, bool bPitch) {
}

void AHbkCineCameraActor::ResetPlayerCameraDirection() {
}

void AHbkCineCameraActor::EnableLevelStreamingVolumes() {
}

void AHbkCineCameraActor::DisableLevelStreamingVolumes() {
}


