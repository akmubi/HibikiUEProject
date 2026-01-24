#include "HbkPhotoCameraActor.h"
#include "Components/SceneComponent.h"
#include "HbkPhotoModeCineCameraComponent.h"

AHbkPhotoCameraActor::AHbkPhotoCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->PhotoCamera = CreateDefaultSubobject<UHbkPhotoModeCineCameraComponent>(TEXT("PhotoCamera"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TraceChannel = ECC_Camera;
    this->DistanceLimit = 1500.00f;
    this->JumpingDistanceLimit = 900.00f;
    this->DoubleJumpingDistanceLimit = 700.00f;
    this->SelfieFocusDistance = 40.00f;
    this->SelfieAperture = 8.00f;
    this->PhotoCamera->SetupAttachment(RootComponent);
}


