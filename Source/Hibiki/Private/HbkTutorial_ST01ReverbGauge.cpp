#include "HbkTutorial_ST01ReverbGauge.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "HbkStaticMeshComponent.h"

AHbkTutorial_ST01ReverbGauge::AHbkTutorial_ST01ReverbGauge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->StaticMesh = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("StaticMesh"));
    this->PlayerStandingPos = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerStandingPos"));
    this->TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    this->InterpMoveTime = 0.25f;
    this->LoopNoteCount = 4;
    this->StaticMesh->SetupAttachment(RootComponent);
    this->PlayerStandingPos->SetupAttachment(RootComponent);
    this->TriggerBox->SetupAttachment(RootComponent);
}

void AHbkTutorial_ST01ReverbGauge::OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkTutorial_ST01ReverbGauge::OnNoteCount(int32 NoteCount) {
}

void AHbkTutorial_ST01ReverbGauge::OnEndedAnim(bool bInterrupted) {
}


