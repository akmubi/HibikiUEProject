#include "HbkProjectileWithMesh.h"
#include "HbkSkeletalMeshComponent.h"

AHbkProjectileWithMesh::AHbkProjectileWithMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("RootScene"));
    this->SkeletalMeshComp = (UHbkSkeletalMeshComponent*)RootComponent;
}


