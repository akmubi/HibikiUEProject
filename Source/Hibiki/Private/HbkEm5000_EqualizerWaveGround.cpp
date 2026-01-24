#include "HbkEm5000_EqualizerWaveGround.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkSpectrumInfoComponent.h"
#include "HbkStaticMeshComponent.h"

AHbkEm5000_EqualizerWaveGround::AHbkEm5000_EqualizerWaveGround(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkEqualizerWaveGroundProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->NoteToScale = EHbkNote::Note_Quarter;
    this->NoteCountToScale = 1;
    this->NoteToWait = EHbkNote::Note_Quarter;
    this->NoteCountToWait = 1;
    this->NoteToDestroy = EHbkNote::Note_Quarter;
    this->NoteCountToDestroy = 4;
    this->ScaleMinZ = 1.00f;
    this->ScaleMaxZ = 3.00f;
    this->MeshComponent = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMesh"));
    this->SpectrumMeshComponent = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("HbkStaticMeshSpectrum"));
    this->SpectrumInfoComp = CreateDefaultSubobject<UHbkSpectrumInfoComponent>(TEXT("SpectrumInfoComp"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->MeshComponent->SetupAttachment(RootComponent);
    this->SpectrumMeshComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}


