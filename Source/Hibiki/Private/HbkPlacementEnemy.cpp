#include "HbkPlacementEnemy.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TextRenderComponent.h"

AHbkPlacementEnemy::AHbkPlacementEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->EnemyClass = NULL;
    this->EnemyId = 0;
    this->AppearAnimIndex = -1;
    this->AppearAnimType = EHbkEnemyAppearType::Warp01;
    this->DelayNoteType = EHbkNote::None;
    this->DelayNoteCount = 0;
    this->StartAIState = EEnemyIntentionState::EIS_Combat;
    this->bIsShowStrongIcon = false;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->TextRenderComp = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
    this->EnemyManagerClass = NULL;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->TextRenderComp->SetupAttachment(SkeletalMesh);
}

void AHbkPlacementEnemy::SetChildActorComponent(UChildActorComponent* ChildActorComp) {
}


