#include "HbkPhotoItemActor.h"
#include "Components/SceneComponent.h"
#include "HbkCostumeComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkPhotoItemActor::AHbkPhotoItemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("Mesh"));
    this->HbkCostumeComp = CreateDefaultSubobject<UHbkCostumeComponent>(TEXT("HbkCostumeComp"));
    this->Mesh->SetupAttachment(RootComponent);
}

void AHbkPhotoItemActor::SetupItem() {
}


