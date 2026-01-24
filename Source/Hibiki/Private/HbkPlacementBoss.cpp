#include "HbkPlacementBoss.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AHbkPlacementBoss::AHbkPlacementBoss(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->BossClass = NULL;
    this->BossId = 0;
    this->DelayNoteType = EHbkNote::None;
    this->DelayNoteCount = 0;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->SkeletalMesh->SetupAttachment(RootComponent);
}

void AHbkPlacementBoss::SetChildActorComponent(UChildActorComponent* ChildActorComp) {
}


