#include "HbkAnimCameraActor.h"
#include "HbkAnimCameraComponent.h"

AHbkAnimCameraActor::AHbkAnimCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkAnimCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

void AHbkAnimCameraActor::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}


