#include "HibikiCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AHibikiCharacter::AHibikiCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->CameraBoom->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(CameraBoom);
}


