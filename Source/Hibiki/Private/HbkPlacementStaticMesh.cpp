#include "HbkPlacementStaticMesh.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AHbkPlacementStaticMesh::AHbkPlacementStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->StaticMesh->SetupAttachment(RootComponent);
}


