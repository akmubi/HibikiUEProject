#include "HbkProjectileWithoutMesh.h"
#include "Components/SceneComponent.h"

AHbkProjectileWithoutMesh::AHbkProjectileWithoutMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
}


