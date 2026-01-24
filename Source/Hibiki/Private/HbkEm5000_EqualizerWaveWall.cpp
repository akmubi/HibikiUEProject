#include "HbkEm5000_EqualizerWaveWall.h"
#include "Components/SceneComponent.h"
#include "HbkStaticMeshComponent.h"

AHbkEm5000_EqualizerWaveWall::AHbkEm5000_EqualizerWaveWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MeshComponent_Shape1 = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_Shape1"));
    this->MeshComponent_Shape2 = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_Shape2"));
    this->MeshComponent_Shape3 = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_Shape3"));
    this->MeshComponent_Shape4 = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_Shape4"));
    this->MeshComponent_Shape1->SetupAttachment(RootComponent);
    this->MeshComponent_Shape2->SetupAttachment(RootComponent);
    this->MeshComponent_Shape3->SetupAttachment(RootComponent);
    this->MeshComponent_Shape4->SetupAttachment(RootComponent);
}


