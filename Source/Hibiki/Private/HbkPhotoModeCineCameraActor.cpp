#include "HbkPhotoModeCineCameraActor.h"
#include "HbkPhotoModeCineCameraComponent.h"

AHbkPhotoModeCineCameraActor::AHbkPhotoModeCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkPhotoModeCineCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}


