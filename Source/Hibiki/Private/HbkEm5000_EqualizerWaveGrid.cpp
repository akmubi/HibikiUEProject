#include "HbkEm5000_EqualizerWaveGrid.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkStaticMeshComponent.h"

AHbkEm5000_EqualizerWaveGrid::AHbkEm5000_EqualizerWaveGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkEqualizerWaveGridProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->bIsRequestDestroy = false;
    this->bIsVisibleOmen = false;
    this->OmenNoteTimeMax = 0.00f;
    this->OmenNoteTime = 0.00f;
    this->NoteToFloor = EHbkNote::Note_Quarter;
    this->NoteCountToFloor = 1;
    this->NoteToWall = EHbkNote::Note_Quarter;
    this->NoteCountToWall = 1;
    this->NoteToDestroy = EHbkNote::Note_Quarter;
    this->NoteCountToDestroy = 4;
    this->FloorEasingFunc = EEasingFunc::Linear;
    this->FloorEaseBlendExp = 2.00f;
    this->FloorEaseStep = 2;
    this->WallEasingFunc = EEasingFunc::Linear;
    this->WallEaseBlendExp = 2.00f;
    this->WallEaseStep = 2;
    this->BreakParticle = NULL;
    this->GridRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GridSceneRoot"));
    this->GridOmenRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GridOmenSceneRoot"));
    this->MeshComponent_GridFront = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridFront"));
    this->MeshComponent_GridLeft = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridLeft"));
    this->MeshComponent_GridRight = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridRight"));
    this->MeshComponent_GridBottom = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridBottom"));
    this->MeshComponent_GridOmenFront = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridOmenFront"));
    this->MeshComponent_GridOmenLeft = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridOmenLeft"));
    this->MeshComponent_GridOmenRight = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridOmenRight"));
    this->MeshComponent_GridOmenBottom = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh_GridOmenBottom"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->GridRootComponent->SetupAttachment(RootComponent);
    this->GridOmenRootComponent->SetupAttachment(RootComponent);
    this->MeshComponent_GridFront->SetupAttachment(GridRootComponent);
    this->MeshComponent_GridLeft->SetupAttachment(GridRootComponent);
    this->MeshComponent_GridRight->SetupAttachment(GridRootComponent);
    this->MeshComponent_GridBottom->SetupAttachment(GridRootComponent);
    this->MeshComponent_GridOmenFront->SetupAttachment(GridOmenRootComponent);
    this->MeshComponent_GridOmenLeft->SetupAttachment(GridOmenRootComponent);
    this->MeshComponent_GridOmenRight->SetupAttachment(GridOmenRootComponent);
    this->MeshComponent_GridOmenBottom->SetupAttachment(GridOmenRootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_EqualizerWaveGrid::TestChangeProcessFloor() {
}


