#include "HbkEm6000_PopupEmbankment.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "HbkSkeletalMeshComponent.h"
#include "HbkStaticMeshComponent.h"

AHbkEm6000_PopupEmbankment::AHbkEm6000_PopupEmbankment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->EmbankmentSkeletalMeshComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("EmbankmentSkeletalMesh"));
    this->FlagStaticMeshComponent = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("FlagStaticMesh"));
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->MoveAnim = NULL;
    this->EmbankmentSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->FlagStaticMeshComponent->SetupAttachment(RootComponent);
    this->CollisionComponent->SetupAttachment(RootComponent);
}


